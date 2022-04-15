//----- (0000000140193730) ----------------------------------------------------
void __noreturn sub_140193730()
{
	ULONG_PTR Arguments; // [rsp+30h] [rbp+8h] BYREF

	Arguments = (ULONG_PTR)L"Fatal Error: Pure virtual function call\n";
	RaiseException(0xCFFF0002, 1u, 1u, &Arguments);
	ExitProcess(1u);
}
// 140B5E5A0: using guessed type wchar_t aFatalErrorPure[41];

