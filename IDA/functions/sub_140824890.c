//----- (0000000140824890) ----------------------------------------------------
BOOL __fastcall sub_140824890(
	WCHAR* a1,
	WCHAR* a2,
	struct _SECURITY_ATTRIBUTES* a3,
	struct _SECURITY_ATTRIBUTES* a4,
	BOOL bInheritHandles,
	DWORD dwCreationFlags,
	LPVOID lpEnvironment,
	LPCWSTR lpCurrentDirectory,
	LPSTARTUPINFOW lpStartupInfo,
	int a10,
	LPPROCESS_INFORMATION lpProcessInformation)
{
	SetLastError(0);
	return (unsigned int)sub_140824940(a1, a2, a10)
		&& CreateProcessW(
			a1,
			a2,
			a3,
			a4,
			bInheritHandles,
			dwCreationFlags,
			lpEnvironment,
			lpCurrentDirectory,
			lpStartupInfo,
			lpProcessInformation);
}

