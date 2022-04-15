//----- (00000001401E55D0) ----------------------------------------------------
__int64 __fastcall sub_1401E55D0(__int64 a1, __int64 a2)
{
	__int64 v5; // rdi
	int v6; // ecx

	if (!(unsigned int)sub_1401DCE80(*(_QWORD*)(a1 + 16), a2)
		|| !*(_DWORD*)(a1 + 1204) && !(unsigned int)sub_1401E5510(a1, a2)
		|| (int)sub_1401E5BC0(a1) < 0)
	{
		return 0i64;
	}
	while (*(_QWORD*)(a1 + 1256))
	{
		v5 = *(_QWORD*)(a1 + 1256);
		if (v5)
		{
			sub_1401E50B0(*(_QWORD**)(a1 + 1256));
			sub_14018B900(v5, 0);
		}
	}
	v6 = *(_DWORD*)(a1 + 1216);
	++* (_DWORD*)(a1 + 1212);
	*(_DWORD*)(a1 + 1208) = 1;
	*(_DWORD*)(a1 + 1220) = v6;
	return 1i64;
}

