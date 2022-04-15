//----- (000000014005EEA0) ----------------------------------------------------
__int64 __fastcall sub_14005EEA0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v5; // rcx
	char* v8; // r8
	char* v9; // r9
	__int64 result; // rax

	v3 = *(int*)(a2 + 8);
	v5 = *(int*)(a3 + 8);
	if ((_DWORD)v3 != (_DWORD)v5)
	{
		v8 = off_140A123B0[v3];
		v9 = off_140A123B0[v5];
		if (v8[2] == v9[2])
			sub_14005ABE0(a1, "attempt to compare two %s values", v8);
		sub_14005ABE0(a1, "attempt to compare %s with %s", v8, v9);
	}
	if ((_DWORD)v3 == 3)
		return *(double*)a2 < *(double*)a3;
	if ((_DWORD)v3 == 4)
		return (int)sub_14005EE10(*(_QWORD*)a2, *(_QWORD*)a3) < 0;
	result = sub_14005ED70(a1, (_DWORD*)a2, (_DWORD*)a3, 13);
	if ((_DWORD)result == -1)
		sub_14005AA20(a1, a2, a3);
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 140A123B0: using guessed type char *off_140A123B0[11];

