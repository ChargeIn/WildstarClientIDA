//----- (00000001408851A0) ----------------------------------------------------
__int64 __fastcall sub_1408851A0(__int64 a1, float* a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	char v6; // al
	__int64 v7; // rax
	int v8; // edi
	double v10; // xmm0_8
	__int128 v11; // rdi
	float v12; // xmm6_4
	char v13; // al
	__int64 v14; // rax
	double v15; // xmm0_8
	char v16; // al
	char v17; // cl
	__int64 v18; // [rsp+30h] [rbp-48h]
	__int128 v19; // [rsp+30h] [rbp-48h]
	__int64 v20; // [rsp+38h] [rbp-40h]

	v2 = *(_QWORD*)(a1 + 120);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	while (1)
	{
		v6 = *(_BYTE*)(v2 + 117);
		if ((v6 & 8) == 0)
			break;
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2))
		{
			v7 = *(_QWORD*)(v2 + 24);
			v20 = v3;
			v18 = v7;
			if (v2 == *(_QWORD*)(a1 + 120))
				*(_QWORD*)(a1 + 120) = v7;
			else
				*(_QWORD*)(v3 + 24) = v7;
			v8 = dword_140C111C0;
			(**(void(__fastcall***)(__int64, _QWORD))v2)(v2, 0i64);
			sub_140881720(v8, v2);
			v3 = v20;
			v2 = v18;
			goto LABEL_11;
		}
	LABEL_10:
		v3 = v2;
		v2 = *(_QWORD*)(v2 + 24);
	LABEL_11:
		if (!v2)
			return 0i64;
	}
	if ((v6 & 1) != 0 || (v6 & 0x40) == 0)
		goto LABEL_10;
	v10 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2);
	*(_QWORD*)&v11 = *(_QWORD*)(v2 + 24);
	*((_QWORD*)&v11 + 1) = v2;
	v12 = *(float*)&v10;
	while ((_QWORD)v11)
	{
		v13 = *(_BYTE*)(v11 + 117);
		if ((v13 & 8) != 0)
		{
			if ((*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)v11 + 8i64))(v11))
			{
				v14 = *(_QWORD*)(v11 + 24);
				*((_QWORD*)&v19 + 1) = *((_QWORD*)&v11 + 1);
				*(_QWORD*)&v19 = v14;
				if ((_QWORD)v11 == *(_QWORD*)(a1 + 120))
					*(_QWORD*)(a1 + 120) = v14;
				else
					*(_QWORD*)(*((_QWORD*)&v11 + 1) + 24i64) = v14;
				DWORD2(v11) = dword_140C111C0;
				(**(void(__fastcall***)(_QWORD, _QWORD))v11)(v11, 0i64);
				sub_140881720(SDWORD2(v11), v11);
				v11 = v19;
				continue;
			}
		}
		else
		{
			if ((v13 & 1) != 0 || (v13 & 0x40) == 0)
				goto LABEL_30;
			v15 = (*(double(__fastcall**)(_QWORD))(*(_QWORD*)v11 + 48i64))(v11);
			if (*(float*)&v15 == 0.0)
			{
				v16 = *(_BYTE*)(v11 + 116);
				v17 = *(_BYTE*)(v2 + 116);
				if (v16 <= v17
					&& v12 <= 0.0
					&& (v16 != v17
						|| (float)((float)(int)(*(_QWORD*)(a1 + 112) - *(_DWORD*)(v11 + 88))
							* (float)(1.0 / *(float*)&dword_140C61FE8)) <= (float)((float)(int)(*(_QWORD*)(a1 + 112)
								- *(_DWORD*)(v2 + 88))
								* (float)(1.0 / *(float*)&dword_140C61FE8))))
				{
					goto LABEL_30;
				}
			LABEL_29:
				v2 = v11;
				v12 = *(float*)&v15;
				goto LABEL_30;
			}
			if (*(float*)&v15 < v12)
				goto LABEL_29;
		}
	LABEL_30:
		*((_QWORD*)&v11 + 1) = v11;
		*(_QWORD*)&v11 = *(_QWORD*)(v11 + 24);
	}
	*a2 = v12;
	return v2;
}
// 14088520D: conditional instruction was optimized away because rbx.8!=0
// 1408852EB: conditional instruction was optimized away because rdi.8!=0
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C111C0: using guessed type int dword_140C111C0;
// 140C61FE8: using guessed type int dword_140C61FE8;

