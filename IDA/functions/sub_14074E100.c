//----- (000000014074E100) ----------------------------------------------------
bool __fastcall sub_14074E100(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	bool v4; // zf
	__int64 v5; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (v2)
	{
		v5 = *(_QWORD*)(a2 + 8);
		if (v5)
			return *(_DWORD*)(v2 + 352) < *(_DWORD*)(v5 + 352);
		v4 = v2 == 0;
	}
	else
	{
		if (!*(_QWORD*)(a2 + 8))
			return ***(_DWORD***)a1 < ***(_DWORD***)a2;
		v4 = 1;
	}
	return !v4;
}
// 14074E127: conditional instruction was optimized away because r8.8==0

