#pragma once

template <typename T>
T* GetInterface(const char* name, const char* mod)
{
	const auto handle = GetModuleHandle(mod);
	if (!handle) {
		std::cout << "GetModuleHandle returned invalid value!\n";
		return nullptr;
	}

	const auto funcAddr = GetProcAddress(handle, "CreateInterface");
	if (!funcAddr) {
		std::cout << "GetProcAddress returned invalid value!\n";
		return nullptr;
	}

	using Fn = T * (*)(const char*, int*);
	const auto CreateInterface = reinterpret_cast<Fn>(funcAddr);

	return CreateInterface(name, nullptr);
}