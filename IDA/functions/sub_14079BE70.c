//----- (000000014079BE70) ----------------------------------------------------
__int64 __fastcall sub_14079BE70(__int64 a1, _WORD* a2, __int64* a3)
{
	_WORD* v4; // rax
	unsigned __int64 v6; // rbp
	unsigned __int64 v7; // r14
	__int64 v8; // rdx
	unsigned __int16 v9; // cx
	_WORD* v10; // rbx
	__int64 v11; // rdi
	unsigned __int16* v12; // r10
	__int64 v13; // r15
	unsigned __int64 v14; // r9
	__int16 v15; // r9
	__int64 v16; // r10
	__int64 v17; // r11
	unsigned __int64 v18; // rsi
	_QWORD* v19; // rbx
	__int64* v20; // rbx
	int v21; // ecx
	int v22; // r9d
	unsigned int v23; // edi
	__int64 v24; // rbx
	__int64 v25; // r15
	int* v26; // rax
	int* v27; // rsi
	unsigned __int64 v29; // [rsp+40h] [rbp-58h] BYREF
	__int64 v30; // [rsp+48h] [rbp-50h]
	_WORD* v31; // [rsp+50h] [rbp-48h] BYREF
	__int64 v32; // [rsp+58h] [rbp-40h]
	unsigned int v34; // [rsp+B8h] [rbp+20h]

	v4 = a2;
	v6 = 0i64;
	v29 = 0i64;
	v30 = 0i64;
	if (!a2 || !*a2)
		return 0i64;
	v7 = 0i64;
	do
		++v7;
	while (a2[v7]);
	v8 = 0x100002600i64;
	v34 = 0;
	while (1)
	{
		v9 = v4[v6];
		v10 = &v4[v6];
		if (!v9)
			return v34;
		if (v9 <= 0x20u && _bittest64(&v8, v9)
			|| (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u && (unsigned __int16)(v9 - 48) > 9u)
		{
			goto LABEL_43;
		}
		v11 = 0i64;
		v30 = 0i64;
		if (v6 < v7)
		{
			v12 = &v4[v6];
			v13 = 0x100002600i64;
			do
			{
				v14 = *v12;
				if (!(_WORD)v14 || (unsigned __int16)v14 <= 0x20u && _bittest64(&v13, v14))
					break;
				if (!sub_1403E09D0(v14) && (unsigned __int16)(v15 - 48) > 9u)
					break;
				++v11;
				v12 = (unsigned __int16*)(v16 + 2);
			} while (v17 + 1 < v7);
			v30 = v11;
		}
		v32 = v11;
		v31 = v10;
		v18 = (*(__int64(__fastcall**)(_WORD**, __int64))(a1 + 24))(&v31, v8);
		v19 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v18 % *(_QWORD*)(a1 + 8)));
		if (!v19)
			goto LABEL_25;
		while (v18 != *v19 || !(*(unsigned int(__fastcall**)(_WORD**, _QWORD*))(a1 + 32))(&v31, v19 + 2))
		{
			v19 = (_QWORD*)v19[1];
			if (!v19)
				goto LABEL_25;
		}
		if (v19 == (_QWORD*)-32i64)
		{
		LABEL_25:
			v20 = *(__int64**)(a1 + 48);
			if (v20)
			{
				while (1)
				{
					v21 = 0x7FFFFFFF;
					v22 = 0x80000000;
					if ((_DWORD)v32 != 0x7FFFFFFF)
						v21 = v32;
					if (v21 != 0x80000000)
						v22 = v21;
					if ((int)sub_1409189A0(*v20, v20[1], v31, v22, 0, 0, 0i64, 0) >= 0)
						break;
					v20 = (__int64*)v20[4];
					if (!v20)
						goto LABEL_42;
				}
				if (!a3)
					return 1i64;
				v24 = a3[1];
				v25 = v24 + 1;
				v34 = 1;
				v26 = sub_14018DB00(*a3, v24 + 1, 16i64);
				v24 *= 2i64;
				*(_QWORD*)&v26[2 * v24] = v6;
				*(_QWORD*)&v26[2 * v24 + 2] = v11;
				v27 = v26;
				if ((int*)*a3 != v26)
				{
					sub_1407DB590(v26, (int*)*a3, 16 * a3[1]);
					if (*a3)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a3 - 16) + 8i64))(*a3 - 16);
					*a3 = (__int64)v27;
				}
				a3[1] = v25;
			}
		LABEL_42:
			v8 = 0x100002600i64;
			v6 = v11 + v6 - 1;
		LABEL_43:
			v23 = v34;
			goto LABEL_44;
		}
		if (!a3)
			return 1i64;
		v23 = 1;
		v34 = 1;
		sub_140573D10(a3, &v29);
		v6 = v29;
		v8 = 0x100002600i64;
	LABEL_44:
		v29 = ++v6;
		if (v6 > v7)
			return v23;
		v4 = a2;
	}
}
// 14079BF65: variable 'v15' is possibly undefined
// 14079BF77: variable 'v16' is possibly undefined
// 14079BF71: variable 'v17' is possibly undefined
// 14079BF97: variable 'v8' is possibly undefined

