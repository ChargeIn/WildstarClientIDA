//----- (0000000140142B70) ----------------------------------------------------
void __fastcall sub_140142B70(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // r15
	char v5; // al
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 i; // r14
	__int64 v10; // rsi
	const wchar_t* v11; // rbx
	wchar_t* v12; // rax
	int v13; // ecx
	bool v14; // zf
	__int64 v15; // rax
	__int64 v16; // rsi
	unsigned __int16* v17; // rbp
	const wchar_t* v18; // rbx
	wchar_t* v19; // rax
	int v20; // ecx
	bool v21; // zf
	__int64 v22; // rax
	unsigned __int16* v23; // rdx
	unsigned __int64 v24; // rbx
	_OWORD* v25; // r8
	__int64 v26; // [rsp+58h] [rbp+10h] BYREF

	v26 = a2;
	v3 = sub_14018B280(16i64, 0);
	v4 = (__int64)v3;
	if (v3)
		*(_WORD*)v3 = 0;
	v26 = 0i64;
	v5 = sub_1400E27B0(qword_140C63650, (__m128i*)L"UI\\Assets\\Docs\\General\\ApolloColors.xml", &v26);
	v6 = v26;
	if (v5)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
		v8 = sub_1401A5AE0(v7, L"Colors");
		if (v8)
		{
			*(_BYTE*)(a1 + 60) = 0;
			for (i = sub_1401A5AE0(v8, L"Color"); i; i = sub_1401A5BC0(i, L"Color"))
			{
				v10 = *(_QWORD*)(i + 96);
				if (v10)
				{
					while (1)
					{
						v11 = L"Name";
						v12 = (wchar_t*)sub_1401A4F40(v10 + 8);
						if (v12 == L"Name")
							break;
						v13 = 0;
						if (*v12)
						{
							do
							{
								if (!*v11 || *v12 != *v11)
									break;
								v14 = v13 == 0x7FFFFFFF;
								if (v13 == 0x7FFFFFFF)
									goto LABEL_14;
								++v12;
								++v11;
								++v13;
							} while (*v12);
							v14 = v13 == 0x7FFFFFFF;
						LABEL_14:
							if (v14)
								break;
						}
						if (!*v12 && !*v11)
							break;
						v10 = *(_QWORD*)(v10 + 56);
						if (!v10)
							goto LABEL_18;
					}
					v15 = sub_1401A4F40(v10 + 32);
				}
				else
				{
				LABEL_18:
					v15 = 0i64;
				}
				v16 = *(_QWORD*)(i + 96);
				v17 = (unsigned __int16*)&unk_1409D95A4;
				if (v15)
					v17 = (unsigned __int16*)v15;
				if (v16)
				{
					while (1)
					{
						v18 = L"Color";
						v19 = (wchar_t*)sub_1401A4F40(v16 + 8);
						if (v19 == L"Color")
							break;
						v20 = 0;
						if (*v19)
						{
							do
							{
								if (!*v18 || *v19 != *v18)
									break;
								v21 = v20 == 0x7FFFFFFF;
								if (v20 == 0x7FFFFFFF)
									goto LABEL_29;
								++v19;
								++v18;
								++v20;
							} while (*v19);
							v21 = v20 == 0x7FFFFFFF;
						LABEL_29:
							if (v21)
								break;
						}
						if (!*v19 && !*v18)
							break;
						v16 = *(_QWORD*)(v16 + 56);
						if (!v16)
							goto LABEL_33;
					}
					v22 = sub_1401A4F40(v16 + 32);
				}
				else
				{
				LABEL_33:
					v22 = 0i64;
				}
				v23 = (unsigned __int16*)&unk_1409D95CC;
				if (v22)
					v23 = (unsigned __int16*)v22;
				v24 = (unsigned int)sub_140142170(qword_140C63678, v23);
				if (v24 >= *(_QWORD*)(qword_140C63678 + 48))
					v25 = *(_OWORD**)(qword_140C63678 + 40);
				else
					v25 = (_OWORD*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v24);
				sub_140142780(a1, v17, v25, 0i64);
				sub_1401429A0(qword_140C63678, v24);
			}
			*(_BYTE*)(a1 + 60) = 1;
		}
	}
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	if (v4)
		sub_14018B900(v4, 0);
}
// 140142D76: conditional instruction was optimized away because rsi.8!=0
// 140142D8D: conditional instruction was optimized away because rsi.8!=0
// 1409FE4A0: using guessed type wchar_t aUiAssetsDocsGe_9[40];
// 140A24280: using guessed type wchar_t aColors[7];
// 140A24290: using guessed type wchar_t aColor[6];
// 140A242A0: using guessed type wchar_t aColor_1[6];
// 140A243B8: using guessed type wchar_t aName_9[5];
// 140A243C8: using guessed type wchar_t aColor_0[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;

