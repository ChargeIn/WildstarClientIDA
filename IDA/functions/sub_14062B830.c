//----- (000000014062B830) ----------------------------------------------------
__int64 __fastcall sub_14062B830(__int64 a1)
{
	int* v2; // rcx
	__int64 v3; // rcx
	int v4; // eax
	unsigned int v5; // r8d

	v2 = sub_14018B280(768i64, 0);
	if (v2)
	{
		sub_1405CFCB0((__int64)v2);
		*(_QWORD*)v3 = off_140B6DDA0;
		*(_OWORD*)(v3 + 640) = 0i64;
		*(_DWORD*)(v3 + 720) = 0;
	}
	else
	{
		v3 = 0i64;
	}
	*(_QWORD*)a1 = v3;
	*(_OWORD*)(a1 + 96) = 0i64;
	*(_OWORD*)(a1 + 112) = 0i64;
	v4 = sub_1405CFED0(*(_QWORD*)a1, a1);
	if (v4 < 0)
		return (unsigned int)v4;
	return v5;
}
// 14062B85F: variable 'v3' is possibly undefined
// 14062B897: variable 'v5' is possibly undefined
// 140B6DDA0: using guessed type __int64 (__fastcall *off_140B6DDA0[127])();

