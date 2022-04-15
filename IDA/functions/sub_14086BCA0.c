//----- (000000014086BCA0) ----------------------------------------------------
__int64 __fastcall sub_14086BCA0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	unsigned int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v12; // [rsp+20h] [rbp-38h] BYREF
	__int64 v13; // [rsp+28h] [rbp-30h]
	int v14; // [rsp+30h] [rbp-28h]
	int v15; // [rsp+34h] [rbp-24h]
	int v16; // [rsp+38h] [rbp-20h]
	__int16 v17; // [rsp+3Ch] [rbp-1Ch]
	char v18; // [rsp+3Eh] [rbp-1Ah]

	v7 = 1;
	v8 = sub_140830F00(qword_140C61BA8, a2, 0);
	v9 = v8;
	if (v8)
	{
		sub_14082F330((__int64)qword_140C61B68, v8, a4, 0);
		if ((*(_BYTE*)(a3 + 8) & 7) == 1)
		{
			v17 = 0;
			v12 = 0;
			v14 = 0;
			v15 = *(_DWORD*)a3;
			v10 = *(_QWORD*)v9;
			v18 = 0;
			v16 = 4;
			v13 = a4;
			v7 = (*(__int64(__fastcall**)(__int64, int*))(v10 + 128))(v9, &v12);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v9 + 152i64))(v9, a4, a1, 0i64);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	}
	return v7;
}

