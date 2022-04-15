//----- (000000014085A600) ----------------------------------------------------
bool __fastcall sub_14085A600(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v2; // rax
	bool v3; // dl
	__int64 v5; // rax

	v2 = *(_QWORD*)(a1 + 48);
	v3 = v2 && (*(_BYTE*)(v2 + 32) & 0x10) != 0;
	if ((*(_DWORD*)(a1 + 96) & 0x10000000) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 28, 0i64);
		return v1 != 0.0;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 40);
		if (v5)
			return (*(_BYTE*)(v5 + 32) & 0x10) != 0;
		else
			return v3;
	}
}
// 14085A640: variable 'v1' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

