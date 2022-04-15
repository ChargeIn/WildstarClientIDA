//----- (000000014085A670) ----------------------------------------------------
bool __fastcall sub_14085A670(_QWORD* a1, unsigned int a2)
{
	float v2; // xmm0_4
	__int64 v3; // r9
	__int64 v4; // r8
	char v6; // dl
	__int64 v7; // rax
	__int64 v8; // rax

	v3 = a1[6];
	v4 = a2;
	if (!v3)
		return 0;
	v6 = (*(_BYTE*)(v3 + 32) >> a2) & 1;
	if (*(_DWORD*)(v3 + 8 * v4 + 4) && (v7 = a1[12], _bittest64(&v7, (unsigned __int8)(v4 + 24))))
	{
		sub_140836340(qword_140C61BB0, (__int64)a1, v4 + 24, 0i64);
		return v2 != 0.0;
	}
	else
	{
		v8 = a1[5];
		if (v8)
			return (*(_BYTE*)(v8 + 32) >> v4) & 1;
		return v6;
	}
}
// 14085A6CD: variable 'v2' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

