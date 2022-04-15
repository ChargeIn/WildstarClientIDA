//----- (00000001401936F0) ----------------------------------------------------
void __noreturn sub_1401936F0()
{
	ULONG_PTR Arguments; // [rsp+38h] [rbp+10h] BYREF

	Arguments = (ULONG_PTR)L"Fatal Error: Abort\n";
	RaiseException(0xCFFF0002, 1u, 1u, &Arguments);
	ExitProcess(1u);
}
// 140B5E5F8: using guessed type wchar_t aFatalErrorAbor[20];

