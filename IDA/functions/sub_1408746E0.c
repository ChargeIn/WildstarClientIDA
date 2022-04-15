//----- (00000001408746E0) ----------------------------------------------------
__int64 __fastcall sub_1408746E0(__int64* a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned int v5; // ebx
	__int64* v6; // rdx
	char v7; // al
	__int64 v8; // rdx
	__int64 v9; // rcx
	unsigned int v10; // eax
	__int64 v12[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64* v13; // [rsp+30h] [rbp-28h]
	char v14; // [rsp+38h] [rbp-20h]
	char v15; // [rsp+39h] [rbp-1Fh]
	__int64 v16; // [rsp+40h] [rbp-18h] BYREF
	int v17; // [rsp+48h] [rbp-10h]

	v2 = *(_QWORD*)(a2 + 144);
	v5 = 2;
	v12[0] = *(_QWORD*)v2;
	v12[1] = *(_QWORD*)(v2 + 8);
	v6 = *(__int64**)(v2 + 16);
	v13 = v6;
	v14 = *(_BYTE*)(v2 + 24);
	v7 = *(_BYTE*)(v2 + 25);
	v16 = 0i64;
	v15 = v7;
	v17 = *(_DWORD*)(v2 + 40);
	if (qword_140C61B98)
	{
		v8 = *v6;
		if (v8)
			sub_14083A530(qword_140C61B98, v8);
	}
	sub_140874330(a1, *(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64), &v16);
	v9 = v16;
	if (v16)
	{
		*(_QWORD*)(a2 + 144) = v12;
		v10 = (*(__int64(__fastcall**)(__int64*, __int64))(*a1 + 648))(a1, a2);
		v9 = v16;
		v5 = v10;
		if (v10 == 3)
			v5 = 1;
	}
	if (qword_140C61B98 && *v13)
	{
		sub_14083A740((__int64**)qword_140C61B98, *v13);
		v9 = v16;
	}
	if (v9)
		sub_140866000(v9);
	return v5;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

