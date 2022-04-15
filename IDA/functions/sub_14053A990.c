//----- (000000014053A990) ----------------------------------------------------
void __fastcall sub_14053A990(__int64 a1, double a2)
{
	int* v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // ebx
	int* v6; // rax
	unsigned int v7; // ebp
	__int64 v8; // rcx
	int* v9; // rdi
	int* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	int* v13; // rax
	int* v14; // rax
	__int64* v15; // rbx
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rcx
	_BYTE* v20; // rcx
	_QWORD* v21; // rbx
	__int64 v22; // rcx
	int v23; // ebx
	_QWORD* v24; // rbp
	_DWORD* v25; // rdi
	int v26; // eax
	_QWORD* v27; // rcx
	__int64 v28; // rdx
	void* v29; // [rsp+20h] [rbp-58h]
	__int64 v30; // [rsp+28h] [rbp-50h]
	char v31[32]; // [rsp+30h] [rbp-48h] BYREF

	if (*(_BYTE*)(a1 + 29480))
	{
		v3 = sub_14018B280(2i64, 0);
		sub_1407DB590(v3, dword_1409F21C4, 0i64);
		if (v3)
			*(_WORD*)v3 = 0;
		sub_14053B4A0((__int64)v31, a1);
		if (v3)
			sub_14018B900((__int64)v3, 0);
		*(_BYTE*)(a1 + 29480) = 0;
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 25744);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 6120);
			if (v5 != *(_DWORD*)(a1 + 29932) || *(_DWORD*)(a1 + 30080))
			{
				*(_DWORD*)(a1 + 30080) = 0;
				v6 = sub_14053B190(a1);
				v7 = *(_DWORD*)(a1 + 29932);
				v8 = (unsigned int)dword_140C636A8;
				v9 = v6;
				*(_DWORD*)(a1 + 29932) = v5;
				*(_DWORD*)(a1 + 29928) = v5;
				*(_DWORD*)(a1 + 29936) = v8;
				if (v7)
					sub_14043B3F0((__int64(__fastcall**)())v8, v5);
				sub_1405FA730(v8, *(_DWORD*)(a1 + 29932));
				if (qword_140C65B78)
					sub_140575DD0();
				v10 = sub_14053B190(a1);
				if (v9 && v10 && !(unsigned int)sub_14018E220(v9, (unsigned __int16*)v10))
				{
					sub_14057A2C0(a1);
					if (*(_DWORD*)(a1 + 29928))
					{
						v29 = &unk_1409F224C;
						sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "SubZoneChanged", byte_1409ECB14);
					}
					*(_DWORD*)(a1 + 29928) = 0;
				}
				sub_1404B5610(v11, *(_DWORD*)(a1 + 29932), v7);
				if (v5 != v7)
					sub_14053ADC0(a1);
			}
		}
		if (*(_DWORD*)(a1 + 29928))
		{
			if ((!*(_QWORD*)(qword_140C65898 + 29096) || (v12 = *(_QWORD*)(a1 + 29080)) != 0 && *(_DWORD*)(v12 + 80))
				&& dword_140C636A8 - *(_DWORD*)(a1 + 29936) - 500 > 0)
			{
				v13 = sub_14053B190(a1);
				if (*(_DWORD*)(a1 + 29928) && v13)
				{
					HIDWORD(v29) = HIDWORD(v13);
					sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "SubZoneChanged", byte_1409ECB14);
				}
				*(_DWORD*)(a1 + 29928) = 0;
			}
		}
		sub_1400E74A0(*(_QWORD*)(a1 + 29504), a2);
		sub_1406119E0(*(_QWORD*)(a1 + 29544));
		sub_140777E70(*(_QWORD*)(a1 + 29520), *(float*)&a2);
		v14 = sub_14054F210();
		(*(void(__fastcall**)(int*))(*(_QWORD*)v14 + 8i64))(v14);
		v15 = qword_140C89D80;
		v16 = 36i64;
		do
		{
			if (*v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v15 + 48i64))(*v15);
			++v15;
			--v16;
		} while (v16);
		v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v18 = v17;
		if (dword_140C8AED8 != *(_DWORD*)(v17 + 8) || dword_140C8AED4 != *(_DWORD*)(v17 + 12))
		{
			v19 = *(_QWORD*)(a1 + 29504);
			LODWORD(v29) = *(_DWORD*)(v19 + 84);
			sub_1400EA3E0(v19, "ResolutionChanged", byte_1409EC364, *(unsigned int*)(v19 + 80), v29);
			dword_140C8AED8 = *(_DWORD*)(v18 + 8);
			dword_140C8AED4 = *(_DWORD*)(v18 + 12);
		}
		v20 = *(_BYTE**)(a1 + 30016);
		if (v20 && (v20[28] & 1) == 0)
		{
			(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v20 + 8i64))(v20);
			*(_QWORD*)(a1 + 30016) = 0i64;
		}
		if (qword_140C65C18)
			sub_140630580((__int64)v20);
		if (!*(_QWORD*)(a1 + 30016) && *(_QWORD*)(a1 + 30008))
		{
			v21 = *(_QWORD**)(a1 + 30000);
			if (*v21)
			{
				(**(void(__fastcall***)(_QWORD)) * v21)(*v21);
				v22 = *(_QWORD*)(a1 + 30016);
				if (v22)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
				*(_QWORD*)(a1 + 30016) = *v21;
			}
			sub_14053C1C0((__int64*)(a1 + 30000));
			sub_1400D42F0(*(_QWORD*)(a1 + 30016), 1, 0, 4.0);
		}
		if (*(_DWORD*)(a1 + 29484))
		{
			*(_DWORD*)(a1 + 29484) = 0;
			v23 = 0;
			v24 = (_QWORD*)(a1 + 4336);
			v25 = (_DWORD*)(a1 + 4288);
			do
			{
				v26 = 0;
				if (*v25 == 1)
				{
					v27 = v24;
					v28 = 2i64;
					do
					{
						if (*(v27 - 1))
							++v26;
						if (*v27)
							++v26;
						if (v27[1])
							++v26;
						if (v27[2])
							++v26;
						if (v27[3])
							++v26;
						if (v27[4])
							++v26;
						v27 += 6;
						--v28;
					} while (v28);
					LODWORD(v30) = v26;
					LODWORD(v29) = 1;
					sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ShowActionBarShortcut", byte_1409E98AC, (unsigned int)v23, v29, v30);
				}
				++v23;
				++v25;
				v24 += 12;
			} while (v23 < 9);
		}
	}
}
// 14053AA96: variable 'v8' is possibly undefined
// 14053AB14: variable 'v11' is possibly undefined
// 14053AC51: variable 'v29' is possibly undefined
// 14053AC90: variable 'v20' is possibly undefined
// 14053AD8D: variable 'v30' is possibly undefined
// 1409E98AC: using guessed type _BYTE byte_1409E98AC[72];
// 1409EC364: using guessed type _BYTE byte_1409EC364[40];
// 1409ECB14: using guessed type _BYTE byte_1409ECB14[4];
// 1409F21C4: using guessed type int dword_1409F21C4[14];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65C18: using guessed type __int64 qword_140C65C18;
// 140C89D80: using guessed type __int64 qword_140C89D80[];
// 140C8AED4: using guessed type int dword_140C8AED4;
// 140C8AED8: using guessed type int dword_140C8AED8;
// 14053A990: using guessed type char var_48[32];

