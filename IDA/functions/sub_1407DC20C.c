//----- (00000001407DC20C) ----------------------------------------------------
void __fastcall sub_1407DC20C(int a1, int a2, int a3)
{
	BOOL v6; // edi
	struct _EXCEPTION_POINTERS v7; // [rsp+28h] [rbp-E0h] BYREF
	int v8; // [rsp+38h] [rbp-D0h] BYREF
	int v9[3]; // [rsp+3Ch] [rbp-CCh] BYREF
	DWORD64 v10; // [rsp+48h] [rbp-C0h]
	struct _CONTEXT ContextRecord; // [rsp+D8h] [rbp-30h] BYREF
	DWORD64 retaddr; // [rsp+5C0h] [rbp+4B8h]
	__int64 v13; // [rsp+5C8h] [rbp+4C0h] BYREF

	if (a1 != -1)
		sub_1407E478C();
	v8 = 0;
	sub_1407E4830(v9, 0i64, 0x94ui64);
	v7.ExceptionRecord = (PEXCEPTION_RECORD)&v8;
	v7.ContextRecord = &ContextRecord;
	sub_1407E2540(&ContextRecord);
	ContextRecord.Rip = retaddr;
	v8 = a2;
	v9[0] = a3;
	ContextRecord.Rsp = (DWORD64)&v13;
	v10 = retaddr;
	v6 = IsDebuggerPresent();
	if (!sub_1407E2AB8(&v7) && !v6 && a1 != -1)
		sub_1407E478C();
}
// 1407DC20C: using guessed type int var_57C[3];

