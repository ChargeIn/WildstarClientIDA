//----- (00000001406474C0) ----------------------------------------------------
__int64 __fastcall sub_1406474C0(__int64 a1, _DWORD* a2)
{
	int v2; // r12d
	int v3; // r14d
	unsigned __int16** v5; // r15
	_DWORD* v6; // rbx
	int v7; // esi
	unsigned __int64 i; // rdi
	__int16* v9; // rax
	unsigned __int16* v10; // r15
	__int16* v11; // rbp
	int v14; // [rsp+70h] [rbp+18h]

	v2 = v14;
	v3 = 0;
	v5 = (unsigned __int16**)a1;
	v6 = &unk_140B6FC60;
	v7 = 0;
	for (i = 0i64; i < 0x20; i += 8i64)
	{
		v9 = sub_14034BDD0(a1, v6[1]);
		v10 = *v5;
		v11 = v9;
		if (!(unsigned int)sub_14018E2C0((__int64)v9, v10))
		{
			*a2 = *v6;
			return 0i64;
		}
		if ((__int16*)sub_14018E5E0(v11, v10) == v11)
		{
			v2 = *v6;
			v3 = v7;
			v7 = 1;
		}
		v5 = (unsigned __int16**)a1;
		v6 += 2;
	}
	if (!v7 || v3)
		return 2147943568i64;
	*a2 = v2;
	return 0i64;
}
// 1406474F7: variable 'a1' is possibly undefined

