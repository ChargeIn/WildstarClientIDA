//----- (00000001400D42F0) ----------------------------------------------------
void __fastcall sub_1400D42F0(__int64 a1, char a2, char a3, float a4)
{
	float v8; // xmm6_4
	__int64 v9; // rdi
	char** v10; // rdx
	int* v11; // rax
	_QWORD* v12; // rsi
	__int64 v13; // rbp
	void(__fastcall * **v14)(_QWORD); // rbp
	__int64 v15; // rcx
	__int64 v17; // rax
	float v18; // xmm0_4
	__int64 v19; // rax
	float v20; // xmm7_4
	float* v21; // rax
	int v22; // eax
	__int64 v23; // rax
	__int64 v24; // rcx

	if (a2)
		v8 = 1.0;
	else
		v8 = 0.0;
	v9 = a1 + 624;
	if (v8 == *(float*)(a1 + 648) && (v8 == *(float*)(a1 + 640) || *(float*)(a1 + 652) != 0.0))
	{
		if (!a3)
			return;
	}
	else
	{
		v10 = off_140A14970;
		if (!a2)
			v10 = &off_140A14980;
		sub_1400C85F0((_QWORD*)a1, (__int64)v10, a1);
	}
	if ((*(_QWORD*)(a1 + 656) & 0x20000000i64) != 0)
	{
		if (!*(_QWORD*)(a1 + 800) && (*(_QWORD*)(a1 + 656) & 0x100000000i64) != 0)
		{
			v11 = sub_14018B280(48i64, 0);
			v12 = v11 ? (_QWORD*)sub_1401095E0((__int64)v11) : 0i64;
			v13 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 800) = v12;
			if (v13)
			{
				if (!*v12 || !sub_14002C740((__int64)(v12 + 2), L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp"))
				{
					v14 = (void(__fastcall***)(_QWORD))sub_140108E80(
						v13 + 240,
						(const __m128i*)L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp");
					if (v14)
					{
						v15 = 0i64;
						while (aCrbWindowanima_0[++v15] != 0)
							;
						sub_14001C480(
							(__int64)(v12 + 2),
							(int*)L"CRB_WindowAnimationSprites:sprWinAnim_BirthLargeTemp",
							(int*)&aCrbWindowanima_0[v15]);
					}
					sub_1401097F0(v12, v14);
				}
			}
		}
		v17 = *(_QWORD*)(a1 + 800);
		if (v17)
		{
			if (*(_QWORD*)v17)
			{
				v18 = *(float*)(*(_QWORD*)v17 + 112i64);
				if (v18 > 0.0)
					a4 = 1.0 / v18;
			}
		}
	}
	v19 = *(_QWORD*)(a1 + 800);
	if (v19)
	{
		v20 = 1.0 / a4;
		*(_DWORD*)(v19 + 8) = dword_140C63664;
		v21 = *(float**)(a1 + 800);
		if (*(_QWORD*)v21)
		{
			if (v20 == 0.0)
				v21[3] = 0.0;
			else
				v21[3] = *(float*)(*(_QWORD*)v21 + 112i64) / v20;
		}
	}
	if ((*(_DWORD*)(a1 + 656) & 0x20000000) == 0 && *(_QWORD*)(a1 + 16) || a3)
	{
		if (v8 != *(float*)(v9 + 24) || (float)0.0 != *(float*)(v9 + 28))
		{
			v22 = dword_140C636A8;
			*(float*)(v9 + 24) = v8;
			*(float*)(v9 + 16) = v8;
			*(_DWORD*)(v9 + 8) = v22;
			*(_DWORD*)(v9 + 28) = 0;
		}
	}
	else
	{
		sub_1400F9C30(v9, v8, a4);
	}
	v23 = *(_QWORD*)(a1 + 16);
	if (v23)
	{
		v24 = *(_QWORD*)(v23 + 16);
		*(_BYTE*)(v23 + 29) |= 1u;
		if (v24)
			sub_1400C8870(v24);
	}
	if (a2)
		sub_1400D4070(a1, 0xCu, (char*)a1, &unk_1409D0277);
	else
		sub_1400D4070(a1, 0xDu, (char*)a1, &unk_1409D0276);
}
// 140A14970: using guessed type char *off_140A14970[3];
// 140A14980: using guessed type char *off_140A14980;
// 140A15640: using guessed type wchar_t aCrbWindowanima_0[53];
// 140C63664: using guessed type int dword_140C63664;
// 140C636A8: using guessed type int dword_140C636A8;

