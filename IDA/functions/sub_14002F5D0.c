//----- (000000014002F5D0) ----------------------------------------------------
__int64 __fastcall sub_14002F5D0(__int64 a1, __int64* a2, __int64 a3)
{
	int v7; // r12d
	int* v8; // r13
	unsigned int v9; // ebx
	_QWORD* v10; // r14
	int* v11; // rcx
	__int64 v12; // rdx
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v21; // rdi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v26; // rsi
	__int64 v27; // rbx
	char v28[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v29; // [rsp+28h] [rbp-D8h]
	__int64 v30; // [rsp+30h] [rbp-D0h]
	char v31[8]; // [rsp+40h] [rbp-C0h] BYREF
	int* v32; // [rsp+48h] [rbp-B8h]
	__int64 v33; // [rsp+50h] [rbp-B0h]
	int* v34; // [rsp+60h] [rbp-A0h] BYREF
	int v35; // [rsp+68h] [rbp-98h]
	int* v36; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v37; // [rsp+78h] [rbp-88h] BYREF
	int* v38; // [rsp+80h] [rbp-80h]
	int v39; // [rsp+88h] [rbp-78h]
	__int64 v40; // [rsp+90h] [rbp-70h] BYREF
	int v41; // [rsp+98h] [rbp-68h]
	int v42; // [rsp+9Ch] [rbp-64h]
	int v43; // [rsp+A0h] [rbp-60h]
	int v44; // [rsp+A4h] [rbp-5Ch]
	int v45; // [rsp+A8h] [rbp-58h]
	int v46[16]; // [rsp+ACh] [rbp-54h] BYREF
	__int64 v47; // [rsp+ECh] [rbp-14h]
	__int64 v48; // [rsp+F4h] [rbp-Ch]
	__int64 v49; // [rsp+FCh] [rbp-4h]
	__int64 v50; // [rsp+108h] [rbp+8h]
	__int64 v51; // [rsp+110h] [rbp+10h]
	__int64 v52; // [rsp+118h] [rbp+18h]
	__int64 v53; // [rsp+120h] [rbp+20h]
	__int64 v54; // [rsp+128h] [rbp+28h]
	__int64 v55; // [rsp+130h] [rbp+30h]
	int v56; // [rsp+138h] [rbp+38h]
	__int64 v57; // [rsp+140h] [rbp+40h]
	__int64 v58; // [rsp+148h] [rbp+48h]
	__int64 v59; // [rsp+150h] [rbp+50h]
	__int64 v60; // [rsp+158h] [rbp+58h]
	__int64 v61; // [rsp+160h] [rbp+60h]
	__int64 v62; // [rsp+168h] [rbp+68h]
	__int64 v63; // [rsp+170h] [rbp+70h]
	int v64; // [rsp+178h] [rbp+78h]

	if (!a2)
		return 2147500037i64;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*a2 + 16))(a2) + 12) != *(_DWORD*)(a1 + 4852)
		|| *(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*a2 + 16))(a2) + 16) != *(_DWORD*)(a1 + 4856))
	{
		if (!a3)
			return 2147500037i64;
		v7 = v35;
		v8 = v34;
		v32 = sub_14018B280(56i64, 0);
		v33 = 0i64;
		*(_BYTE*)v32 = 0;
		v9 = 0;
		*((_QWORD*)v32 + 1) = 0i64;
		*((_QWORD*)v32 + 2) = v32;
		*((_QWORD*)v32 + 3) = v32;
		do
		{
			switch (v9)
			{
			case 1u:
			case 2u:
			case 3u:
			case 4u:
			case 5u:
			case 6u:
			case 7u:
			case 0x14u:
			case 0x2Bu:
			case 0x2Eu:
			case 0x2Fu:
			case 0x34u:
			case 0x35u:
			case 0x36u:
			case 0x37u:
			case 0x38u:
			case 0x39u:
			case 0x3Au:
			case 0x3Bu:
			case 0x3Cu:
			case 0x3Du:
			case 0x3Eu:
			case 0x3Fu:
			case 0x40u:
			case 0x41u:
			case 0x42u:
			case 0x43u:
			case 0x44u:
			case 0x45u:
			case 0x47u:
				v10 = (_QWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(*a2 + 64))(a2, v9);
				if (!*v10 || *(_DWORD*)(*v10 + 16i64) != 70)
				{
					v11 = v32;
					v12 = *((_QWORD*)v32 + 1);
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < (signed int)v9)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v11 = (int*)v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v11 == v32 || (int)v9 < v11[8])
					{
						v36 = v11;
						v37 = v9;
						v38 = v8;
						v39 = v7;
						sub_140032410((__int64)v31, &v34, (__int64*)&v36, (__int64)&v37);
						v11 = v34;
					}
					*((_QWORD*)v11 + 5) = *v10;
					*((_QWORD*)v11 + 6) = v10[1];
				}
				break;
			default:
				break;
			}
			++v9;
		} while (v9 <= 0x48);
		(*(void(__fastcall**)(__int64*, unsigned __int64))(*a2 + 104))(a2, 0x140000000ui64);
		v13 = *(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*a2 + 16))(a2) + 20);
		v14 = *(_DWORD*)(a1 + 4852);
		v45 = 1065353216;
		v42 = v14;
		v15 = *(_DWORD*)(a1 + 4856);
		v44 = v13;
		v40 = 0i64;
		v43 = v15;
		v41 = 0;
		sub_1407E4830(v46, 0i64, 0x40ui64);
		v47 = 0i64;
		v48 = 0i64;
		v49 = 0i64;
		v50 = 0i64;
		v51 = 0i64;
		v52 = 0i64;
		v53 = 0i64;
		v54 = 0i64;
		v55 = 0i64;
		v59 = 0i64;
		v60 = 0i64;
		v61 = 0i64;
		v62 = 0i64;
		v63 = 0i64;
		v64 = 0;
		v16 = *a2;
		v56 = 0;
		v57 = 0i64;
		v58 = 0i64;
		(*(void(__fastcall**)(__int64*, __int64, __int64*))(v16 + 24))(a2, a3, &v40);
		v17 = *((_QWORD*)v32 + 2);
		while ((int*)v17 != v32)
		{
			(*(void(__fastcall**)(__int64*, _QWORD, __int64))(*a2 + 72))(a2, *(unsigned int*)(v17 + 32), v17 + 40);
			v18 = *(_QWORD*)(v17 + 24);
			if (v18)
			{
				v17 = *(_QWORD*)(v17 + 24);
				for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
					v17 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v17 = j;
				if (*(_QWORD*)(v17 + 24) != j)
					v17 = j;
			}
		}
		sub_140030E30((_QWORD*)(a1 + 4696));
		sub_140008410((__int64)v31);
		sub_14018B900((__int64)v32, 0);
	}
	v30 = 0i64;
	v29 = sub_14018B280(40i64, 0);
	*(_BYTE*)v29 = 0;
	*((_QWORD*)v29 + 1) = 0i64;
	*((_QWORD*)v29 + 2) = v29;
	*((_QWORD*)v29 + 3) = v29;
	if (*(_QWORD*)(a1 + 4712))
		sub_140031C90(a1 + 4696, (__int64)v28);
	v21 = (__int64)v29;
	v22 = *((_QWORD*)v29 + 2);
	if ((int*)v22 != v29)
	{
		do
		{
			(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD))(*a2 + 80))(
				a2,
				*(unsigned int*)(v22 + 32),
				*(unsigned int*)(v22 + 36),
				0i64);
			v23 = *(_QWORD*)(v22 + 24);
			if (v23)
			{
				v22 = *(_QWORD*)(v22 + 24);
				for (k = *(_QWORD*)(v23 + 16); k; k = *(_QWORD*)(k + 16))
					v22 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v22 + 8); v22 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v22 = m;
				if (*(_QWORD*)(v22 + 24) != m)
					v22 = m;
			}
		} while (v22 != v21);
		v21 = (__int64)v29;
	}
	if (v30)
	{
		v26 = *(_QWORD*)(v21 + 8);
		if (v26)
		{
			do
			{
				sub_1400083B0((__int64)v28, *(_QWORD*)(v26 + 24));
				v27 = *(_QWORD*)(v26 + 16);
				sub_14018B900(v26, 0);
				v26 = v27;
			} while (v27);
			v21 = (__int64)v29;
		}
		*(_QWORD*)(v21 + 16) = v21;
		*((_QWORD*)v29 + 1) = 0i64;
		*((_QWORD*)v29 + 3) = v29;
		v21 = (__int64)v29;
		v30 = 0i64;
	}
	sub_14018B900(v21, 0);
	return 0i64;
}
// 14002F5D0: using guessed type char var_180[8];
// 14002F5D0: using guessed type int var_114[16];
// 14002F5D0: using guessed type char var_1A0[8];

