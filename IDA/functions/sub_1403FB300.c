//----- (00000001403FB300) ----------------------------------------------------
int* __fastcall sub_1403FB300(__int64 a1, __int64 a2)
{
	__int64 v2; // r13
	int* v4; // rdi
	int* v6; // rbx
	__int64 v7; // r14
	unsigned __int16* v8; // r15
	int* v9; // rax
	__int64 v10; // r8
	int* v11; // rdx
	__int64 v12; // rcx
	int v14; // [rsp+28h] [rbp-E0h] BYREF
	__int128 v15; // [rsp+30h] [rbp-D8h]
	int* v16; // [rsp+40h] [rbp-C8h]
	int* v17; // [rsp+48h] [rbp-C0h]
	int v18; // [rsp+50h] [rbp-B8h]
	unsigned __int32 v19; // [rsp+54h] [rbp-B4h]
	__int64 v20; // [rsp+58h] [rbp-B0h]
	__int64 v21; // [rsp+60h] [rbp-A8h]
	__int64 v22; // [rsp+68h] [rbp-A0h]
	int v23; // [rsp+70h] [rbp-98h]
	__int64 v24; // [rsp+74h] [rbp-94h]
	int v25; // [rsp+7Ch] [rbp-8Ch]
	int v26; // [rsp+80h] [rbp-88h]
	__int128 v27; // [rsp+88h] [rbp-80h]
	__int64 v28; // [rsp+98h] [rbp-70h] BYREF
	__int64 v29; // [rsp+A0h] [rbp-68h]
	__int128 v30; // [rsp+A8h] [rbp-60h]
	_QWORD v31[13]; // [rsp+B8h] [rbp-50h] BYREF
	int* v32; // [rsp+168h] [rbp+60h] BYREF
	int* v33; // [rsp+178h] [rbp+70h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v4)
	{
		v7 = *(_QWORD*)(a2 + 16);
		v8 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_1400454D0(*((_QWORD*)v4 + 5), *((_QWORD*)v4 + 6), v8, v7) < 0)
			{
				v4 = (int*)*((_QWORD*)v4 + 3);
			}
			else
			{
				v6 = v4;
				v4 = (int*)*((_QWORD*)v4 + 2);
			}
		} while (v4);
	}
	if (v6 == (int*)v2
		|| (int)sub_1400454D0(
			*(_QWORD*)(a2 + 8),
			*(_QWORD*)(a2 + 16),
			*((unsigned __int16**)v6 + 5),
			*((_QWORD*)v6 + 6)) < 0)
	{
		v14 = 0;
		v9 = sub_14018B280(16i64, 0);
		*((_QWORD*)&v15 + 1) = v9;
		v16 = v9;
		v17 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = *(_QWORD*)(a2 + 16);
		v11 = *(int**)(a2 + 8);
		v21 = 0i64;
		v22 = 0i64;
		v18 = 0;
		LODWORD(v20) = 0;
		v30 = 0i64;
		v19 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85).m128_u32[0];
		v23 = -1;
		v24 = 0i64;
		v25 = -1;
		v27 = xmmword_140B7B240;
		v26 = 0;
		v29 = 0i64;
		sub_14001C1B0(&v28, v11, v10);
		sub_140474E10((__int64)v31, (__int64)&v14);
		v32 = v6;
		sub_1403FDCF0(a1, &v33, (__int64*)&v32, (__int64)&v28);
		v6 = v33;
		sub_140474FA0(v31);
		if (v29)
			sub_14018B900(v29, 0);
		if (qword_140C65898)
		{
			v12 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v12)
				sub_1400EA3E0(v12, "MessageFinished", byte_1409EB834, &v14);
		}
		if (v21)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
			v21 = 0i64;
		}
		if (v22)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
			v22 = 0i64;
		}
		if (*((_QWORD*)&v15 + 1))
			sub_14018B900(*((__int64*)&v15 + 1), 0);
	}
	return v6 + 16;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403FB300: using guessed type _QWORD var_A0[13];

