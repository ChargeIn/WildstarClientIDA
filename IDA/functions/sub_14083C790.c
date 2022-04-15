//----- (000000014083C790) ----------------------------------------------------
__int64 __fastcall sub_14083C790(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
	char v6; // bp
	__int64 v8; // rsi
	_QWORD* v9; // r14
	unsigned int v10; // r15d
	unsigned int v11; // ebx
	unsigned int v12; // eax
	unsigned int v14; // ecx
	__int64 v15; // rcx
	__int64 v16; // r9
	unsigned int v17; // esi
	char v18; // [rsp+28h] [rbp-40h]
	int v19; // [rsp+28h] [rbp-40h]
	_DWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v21; // [rsp+40h] [rbp-28h]
	char v22; // [rsp+48h] [rbp-20h]
	char v23; // [rsp+49h] [rbp-1Fh]
	int v24; // [rsp+4Ch] [rbp-1Ch]

	v6 = a6;
	v20[1] = a4;
	v24 = -1;
	v20[0] = 0;
	v22 = a6;
	v20[2] = 0;
	v21 = a5;
	v23 = 0;
	v8 = a3;
	v9 = (_QWORD*)(a1 + 48);
	v18 = 1;
	v10 = a2;
	v11 = (*(__int64(__fastcall**)(__int64, __int64, _DWORD*, _QWORD, __int64, char))(*(_QWORD*)qword_140C62930 + 24i64))(
		qword_140C62930,
		a2,
		v20,
		0i64,
		a1 + 48,
		v18);
	if (v11 == 1)
		goto LABEL_5;
	if (v6)
	{
		v22 = 0;
		LOBYTE(v19) = 1;
		v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _DWORD*, _QWORD, __int64, int))(*(_QWORD*)qword_140C62930 + 24i64))(
			qword_140C62930,
			v10,
			v20,
			0i64,
			a1 + 48,
			v19);
	}
	if (v11 == 1)
	{
	LABEL_5:
		v12 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v9 + 40i64))(*v9);
		*(_DWORD*)(a1 + 24) = v12;
		if (!v12)
			return 2i64;
		if (*(_DWORD*)(a1 + 20) < v12)
		{
			if (*(_QWORD*)a1)
				sub_140881720(dword_140C10F20, *(_QWORD*)a1);
			v14 = 0x8000;
			if (*(_DWORD*)(a1 + 24) > 0x8000u)
				v14 = *(_DWORD*)(a1 + 24);
			*(_DWORD*)(a1 + 20) = v14;
			*(_QWORD*)a1 = sub_140881960(dword_140C10F20, v14, 0x20u);
		}
		if (!*(_QWORD*)a1)
			return 52i64;
		if ((_DWORD)v8)
		{
			v15 = *v9;
			a5 = 0i64;
			v11 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)v15 + 72i64))(
				v15,
				v8,
				0i64,
				&a5);
			if (v11 == 1)
			{
				v17 = v8 - a5;
				v11 = sub_14083CB00(a1, v17, (unsigned int*)&a6, v16);
				if (a6 != v17)
					return 2;
			}
		}
	}
	return v11;
}
// 14083C83C: variable 'v19' is possibly undefined
// 14083C8F0: variable 'v16' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62930: using guessed type __int64 qword_140C62930;

