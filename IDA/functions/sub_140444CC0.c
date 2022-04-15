//----- (0000000140444CC0) ----------------------------------------------------
void __fastcall sub_140444CC0(__int64 a1)
{
	unsigned int v1; // esi
	__int64 v3; // rax
	int v4; // edi
	__int64 v5; // rax
	int v6; // ecx
	int v7; // ebp
	unsigned __int64 v8; // rbp
	int* v9; // rbx
	unsigned __int64 v10; // rax
	int* v11; // rdi
	unsigned __int64 i; // rcx
	int* v13; // rdx
	__int64 v14; // rcx
	unsigned int v15; // r12d
	__int64 v16; // r15
	float v17; // xmm6_4
	unsigned int* v18; // rbx
	__int64 v19; // rbp
	unsigned int v20; // edi
	__int64 v21; // rax

	v1 = 0;
	if (dword_140C7CD8C)
	{
		v4 = dword_140C7CD88;
	}
	else
	{
		dword_140C7CD8C = 1;
		v3 = sub_140200220(0x402u);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 12);
			dword_140C7CD88 = v4;
		}
		else
		{
			v4 = 0;
			dword_140C7CD88 = 0;
		}
	}
	if (dword_140C7CC6C)
	{
		v6 = dword_140C7CC68;
	}
	else
	{
		dword_140C7CC6C = 1;
		v5 = sub_140200220(0x402u);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 4);
			dword_140C7CC68 = v6;
		}
		else
		{
			v6 = 0;
			dword_140C7CC68 = 0;
		}
	}
	v7 = 0;
	if (v6 < v4)
		v6 = v4;
	if (v6 > 0)
		v7 = v6;
	v8 = (unsigned int)(v7 + 101);
	if (*(_QWORD*)(a1 + 64) <= v8)
	{
		v9 = sub_14018DB00(*(_QWORD*)(a1 + 56), (unsigned int)v8, 4i64);
		v10 = *(_QWORD*)(a1 + 64);
		if (v10 < v8)
		{
			v11 = &v9[v10];
			for (i = (unsigned int)v8 - v10; i; --i)
				*v11++ = 0;
		}
		v13 = *(int**)(a1 + 56);
		if (v13 != v9)
		{
			sub_1407DB590(v9, v13, 4i64 * *(_QWORD*)(a1 + 64));
			v14 = *(_QWORD*)(a1 + 56);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			*(_QWORD*)(a1 + 56) = v9;
		}
	}
	*(_QWORD*)(a1 + 64) = v8;
	v15 = v8;
	if ((_DWORD)v8)
	{
		v16 = 0i64;
		do
		{
			v17 = 0.0;
			v18 = (unsigned int*)&unk_140B02738;
			v19 = 12i64;
			do
			{
				v20 = *v18;
				if (qword_140C63840)
				{
					v21 = qword_140C63840(off_140A6AFD8, v20, qword_140C63858);
				}
				else
				{
					if (dword_140C6559C || (int)sub_14020E540() < 0)
						goto LABEL_35;
					v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648E8 + 24i64))(qword_140C648E8, v20);
				}
				if (v21)
				{
					if (*(_DWORD*)(v21 + 36) <= v1)
						v17 = v17 + (float)(sub_14040F570(a1, v1) * *(float*)(v21 + 20));
				}
			LABEL_35:
				++v18;
				--v19;
			} while (v19);
			++v1;
			v16 += 4i64;
			*(float*)(v16 + *(_QWORD*)(a1 + 56) - 4) = v17;
		} while (v1 < v15);
	}
}
// 140A6AFD8: using guessed type wchar_t *off_140A6AFD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C648E8: using guessed type __int64 qword_140C648E8;
// 140C6559C: using guessed type int dword_140C6559C;
// 140C7CC68: using guessed type int dword_140C7CC68;
// 140C7CC6C: using guessed type int dword_140C7CC6C;
// 140C7CD88: using guessed type int dword_140C7CD88;
// 140C7CD8C: using guessed type int dword_140C7CD8C;

