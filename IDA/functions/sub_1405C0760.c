//----- (00000001405C0760) ----------------------------------------------------
__int64 __fastcall sub_1405C0760(__int64 a1, int a2, _DWORD* a3, int a4, signed int a5)
{
	_DWORD* v5; // r15
	int v6; // esi
	int v7; // eax
	__int64 v8; // rbx
	__int64 v9; // r13
	int* v10; // r14
	__int64 v11; // r12
	signed int i; // edi
	int v13; // ebx
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64* v19; // rcx
	int* v20; // rax
	int* v21; // rbx
	__int64 v22; // rcx
	int v23; // eax
	__int64 v24; // rcx
	int* v26; // [rsp+28h] [rbp-71h] BYREF
	__int64 v27; // [rsp+30h] [rbp-69h]
	__int64 v28; // [rsp+38h] [rbp-61h] BYREF
	__int64 v29[3]; // [rsp+40h] [rbp-59h] BYREF
	int v30; // [rsp+58h] [rbp-41h]
	int v31; // [rsp+5Ch] [rbp-3Dh]
	__int64 v32; // [rsp+60h] [rbp-39h]
	int v33; // [rsp+68h] [rbp-31h] BYREF
	__int64 v34[3]; // [rsp+70h] [rbp-29h] BYREF
	int v35; // [rsp+88h] [rbp-11h]
	int v36; // [rsp+8Ch] [rbp-Dh]
	__int64 v37; // [rsp+90h] [rbp-9h]
	__int64 v38; // [rsp+98h] [rbp-1h] BYREF
	char v39; // [rsp+A0h] [rbp+7h]
	__int64 v42; // [rsp+108h] [rbp+6Fh] BYREF
	int v43; // [rsp+110h] [rbp+77h]

	v43 = a4;
	v5 = a3;
	v6 = a4;
	v7 = a2;
	v8 = a1;
	v9 = 0i64;
	v27 = 0i64;
	v10 = 0i64;
	v26 = 0i64;
	if (a3)
	{
		v11 = a1 + 64;
		for (i = 0; (unsigned int)i < 0x10; ++i)
		{
			if (*v5)
			{
				v13 = dword_140C636A8;
				memset(v29, 0, sizeof(v29));
				v31 = dword_140C636A8;
				v30 = 0;
				v32 = 0i64;
				v33 = i;
				sub_1403B4F00(v34, (__int64)v29);
				v34[2] = 0i64;
				v35 = 0;
				v36 = v13;
				v37 = 0i64;
				sub_1405C4C10(v11, (__int64)&v38, &v33);
				if (v34[0])
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v34[0] - 16) + 8i64))(v34[0] - 16);
				v14 = v38;
				v8 = a1;
				*(_DWORD*)(v38 + 60) = v6 == i;
				if (v39)
					*(_DWORD*)(v14 + 68) = dword_140C636A8;
			}
			else
			{
				v15 = *(_QWORD*)(v11 + 8);
				v16 = *(_QWORD*)(v8 + 72);
				v17 = *(_QWORD*)(v15 + 8);
				v18 = v15;
				while (v17)
				{
					if (*(_DWORD*)(v17 + 32) < i)
					{
						v17 = *(_QWORD*)(v17 + 24);
					}
					else
					{
						v18 = v17;
						v17 = *(_QWORD*)(v17 + 16);
					}
				}
				if (v18 == v15 || i < *(_DWORD*)(v18 + 32))
				{
					v28 = *(_QWORD*)(v11 + 8);
					v19 = &v28;
				}
				else
				{
					v42 = v18;
					v19 = &v42;
				}
				if (*v19 != v16)
				{
					v20 = sub_14018DB00((__int64)v10, v9 + 1, 4i64);
					v20[v9] = i;
					v21 = v20;
					if (v10 != v20)
					{
						sub_1407DB590(v20, v10, 4 * v9);
						if (v10)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
						v10 = v21;
					}
					++v9;
					a5 = i;
					sub_1405C4DD0(v11, &a5);
					v8 = a1;
					v6 = v43;
				}
			}
			++v5;
		}
		v7 = a2;
		v26 = v10;
		v27 = v9;
	}
	switch (v7)
	{
	case 1:
	case 6:
		if (*(_DWORD*)(v8 + 164))
		{
			*(_DWORD*)(v8 + 164) = 0;
			goto LABEL_32;
		}
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 7:
	case 8:
	case 9:
		break;
	default:
		v22 = qword_140C65B98;
		if (*(_DWORD*)(qword_140C65B98 + 268) != 16)
		{
			v23 = dword_140C636A8;
			*(_DWORD*)(qword_140C65B98 + 304) = 0;
			*(_DWORD*)(v22 + 288) = 52;
			*(_DWORD*)(v22 + 296) = 52;
			*(_DWORD*)(v22 + 292) = v23;
			*(_DWORD*)(v22 + 300) = v23;
			*(_DWORD*)(v22 + 312) = 0;
			*(_QWORD*)(v22 + 320) = 0i64;
			*(_DWORD*)(v22 + 340) = 0;
			*(_DWORD*)(v22 + 264) = 0;
			*(_DWORD*)(v22 + 328) = 0;
			*(_QWORD*)(v22 + 332) = 0i64;
			*(_DWORD*)(v22 + 268) = 16;
			*(_DWORD*)(v22 + 272) = 16;
			v24 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 1368) = 1;
			sub_1400EA3E0(*(_QWORD*)(v24 + 29504), "MatchLeft", &unk_1409D12A2);
		}
		if (*(_DWORD*)(v8 + 164))
		{
			*(_DWORD*)(v8 + 164) = 0;
		LABEL_32:
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingRoleCheckCanceled", &unk_1409D1276);
		}
		break;
	}
	if (v9)
		sub_14042FD40(*(_QWORD*)(qword_140C65898 + 29504), &v26);
	if (v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

