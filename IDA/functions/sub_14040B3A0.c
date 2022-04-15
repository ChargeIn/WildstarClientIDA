//----- (000000014040B3A0) ----------------------------------------------------
void __fastcall sub_14040B3A0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v5; // rcx

	if ((unsigned int)sub_140415BB0(*(_QWORD**)(a1 + 16), (__int64)a3))
	{
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	if (*a3)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a3 + 8i64))(*a3);
		*a3 = 0i64;
	}
	v5 = a3[96];
	if (v5)
		sub_14018B900(v5, 0);
}

