//----- (00000001406D8E10) ----------------------------------------------------
__int64 __fastcall sub_1406D8E10(__int64 a1, int a2, int* a3)
{
	int v3; // r10d
	int v4; // r9d
	int v5; // r11d
	int v7; // ecx
	int v10; // eax
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // r8
	__int64 v14; // r11
	int v15; // eax
	__int64 v16; // r10
	_DWORD* v17; // rax
	__int64 v18; // r9
	int v19; // ecx
	_DWORD* v20; // rdx
	const __m128i* v21; // rdx
	__int64 v22; // rax
	const __m128i* v23; // rax
	int v24; // eax
	__int64 v25; // rdi
	__int64 v26; // rax
	int v27; // ecx
	unsigned int v28; // r8d
	int v29; // edx
	unsigned int v30; // eax
	_QWORD* v31; // rcx
	int v32; // ecx
	int v34; // [rsp+50h] [rbp+8h] BYREF
	unsigned int v35; // [rsp+54h] [rbp+Ch]

	v3 = *(_DWORD*)(a1 + 716);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 724);
	v7 = *(_DWORD*)(a1 + 728);
	if (!a2)
	{
		if (*a3 >= v3 && *a3 < v5)
		{
			v10 = a3[1];
			if (v10 >= v4 && v10 < v7)
			{
				if (*(_BYTE*)(a1 + 1024))
				{
					v11 = qword_140C65898;
					v12 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
					v13 = v12;
					if (v12)
					{
						v14 = *(_QWORD*)(a1 + 32);
						if (*(_DWORD*)(v14 + 2876) == 4)
						{
							if (*(_DWORD*)(*(_QWORD*)(v12 + 64) + 360i64) != a2)
							{
								sub_1400EA3E0(*(_QWORD*)(v11 + 29504), "CraftingModItem", L"O", v12);
								*(_BYTE*)(a1 + 1024) = a2;
								return sub_1400D2550(a1, a2, a3);
							}
						}
						else
						{
							v15 = *(_DWORD*)(v12 + 32);
							if (v15 < 300)
								v16 = *(unsigned __int8*)(v13 + 36) | ((unsigned __int64)(unsigned __int8)v15 << 8);
							else
								v16 = -1i64;
							v17 = *(_DWORD**)(v13 + 72);
							v18 = *(_QWORD*)(v13 + 64);
							v19 = *(_DWORD*)(v18 + 344);
							v20 = v17;
							if (!v17)
								v20 = (_DWORD*)(v18 + 8);
							if (v20)
							{
								if (!v17)
									v17 = (_DWORD*)(v18 + 8);
								v19 = *v17;
							}
							v21 = 0i64;
							if ((unsigned int)(v19 - 1) <= 6)
							{
								v22 = *(_QWORD*)(a1 + 48i64 * v19 + 2192);
								if (v22)
								{
									v23 = *(const __m128i**)(v22 + 32);
									v21 = (const __m128i*) & word_140B7B704;
									if (v23)
										v21 = v23;
								}
							}
							sub_1400E9500((_QWORD*)v14, a1, (int*)&qword_140B3CBA0, *(__m128i**)(v18 + 488), v16, v21);
						}
					}
				}
			}
		}
		*(_BYTE*)(a1 + 1024) = 0;
		return sub_1400D2550(a1, a2, a3);
	}
	if (a2 == 1)
	{
		if (*a3 >= v3 && *a3 < v5)
		{
			v24 = a3[1];
			if (v24 >= v4 && v24 < v7)
			{
				if (*(_BYTE*)(a1 + 1025))
				{
					v25 = qword_140C65898;
					v26 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
					if (v26)
					{
						v27 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 2876i64);
						switch (v27)
						{
						case 2:
							sub_1400EA3E0(*(_QWORD*)(v25 + 29504), "ShowItemInDressingRoom", L"O", v26);
							break;
						case 1:
							sub_1400EA3E0(*(_QWORD*)(v25 + 29504), "ItemLink", byte_1409E9D4C, v26);
							break;
						case 4:
							sub_1400EA3E0(*(_QWORD*)(v25 + 29504), "ToggleItemContextMenu", byte_1409EAE84, v26);
							break;
						default:
							v28 = *(_DWORD*)(v25 + 196);
							v29 = 0;
							v34 = 300;
							v35 = -1;
							v30 = 0;
							if (v28)
							{
								v31 = *(_QWORD**)(v25 + 200);
								while (*v31)
								{
									++v30;
									++v31;
									if (v30 >= v28)
										goto LABEL_49;
								}
								v32 = *(_DWORD*)(v25 + 184);
								v35 = v30;
								v34 = v32;
								if (v32 < 300 && v30 != -1)
								{
									if (v32 || (LOBYTE(v29) = v30 < 0x1F, v29))
										sub_1403C17D0(v25, (int*)(a1 + 1028), &v34, 0);
								}
							}
							break;
						}
					}
				}
			}
		}
	LABEL_49:
		*(_BYTE*)(a1 + 1025) = 0;
	}
	return sub_1400D2550(a1, a2, a3);
}
// 1409E9D4C: using guessed type _BYTE byte_1409E9D4C[48];
// 1409EAE84: using guessed type _BYTE byte_1409EAE84[40];
// 1409EF25C: using guessed type wchar_t aO_8[2];
// 1409EF6C4: using guessed type wchar_t aO_9[2];
// 140B3CBA0: using guessed type __int64 qword_140B3CBA0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

