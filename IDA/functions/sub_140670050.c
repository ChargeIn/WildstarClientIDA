//----- (0000000140670050) ----------------------------------------------------
void __fastcall sub_140670050(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v5; // rbp
	__int64 v6; // r8
	int v7; // r14d
	__int64 v8; // rsi
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // r8
	_QWORD* v17; // rax
	__int64 v18; // r8
	__int64 v19; // rdx
	int v20; // r10d
	__int64 v21; // rdx

	if (*(_DWORD*)(a1 + 1344))
	{
		v4 = *(_QWORD*)(a1 + 168);
		if (v4)
		{
			v5 = 0i64;
			v6 = a1 + 192;
			if (!*(_DWORD*)(a1 + 1336))
				v6 = 0i64;
			v7 = sub_1403B5400(a1, v4, v6);
			if (v7)
			{
				v8 = *(_QWORD*)a1;
				if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64) + 120i64) >= *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 32i64)
					+ 112i64))
					sub_14005E2C0(*(_QWORD*)a1);
				v9 = *(_QWORD*)(v8 + 16);
				v10 = sub_14005C1B0(v8, 0, 0);
				*(_DWORD*)(v9 + 8) = 5;
				*(_QWORD*)v9 = v10;
				*(_QWORD*)(v8 + 16) += 16i64;
				v11 = sub_1400578C0(v8);
				v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64), v11);
				v13 = *(_QWORD*)(v8 + 16);
				*(_QWORD*)v13 = *v12;
				*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
				*(_QWORD*)(v8 + 16) += 16i64;
				sub_1400F06F0(v8, v13, L"nMax", v7);
				*(_QWORD*)(v8 + 16) -= 16i64;
				v15 = *(_QWORD*)(a1 + 160);
				if (v15)
				{
					v16 = a1 + 192;
					if (!*(_DWORD*)(a1 + 1336))
						v16 = 0i64;
					if (*(_DWORD*)(a1 + 1344))
						v5 = *(_QWORD*)(a1 + 168);
					sub_1403B5360(v14, v5, v16, *(float*)(v15 + 132));
					v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64), v11);
					v18 = *(_QWORD*)(v8 + 16);
					*(_QWORD*)v18 = *v17;
					v19 = *((unsigned int*)v17 + 2);
					*(_DWORD*)(v18 + 8) = v19;
					*(_QWORD*)(v8 + 16) += 16i64;
					sub_1400F06F0(v8, v19, L"nCurrent", v20);
					*(_QWORD*)(v8 + 16) -= 16i64;
				}
				sub_1400FB2A0(a2, (__int64)L"tDurability", v11);
				sub_1400579E0(v8, v21, v11);
			}
		}
	}
}
// 14067016C: variable 'v14' is possibly undefined
// 1406701A9: variable 'v20' is possibly undefined
// 1406701CB: variable 'v21' is possibly undefined
// 140B2F5D0: using guessed type wchar_t aNcurrent[9];
// 140B2F5E8: using guessed type wchar_t aTdurability[12];
// 140B2F610: using guessed type wchar_t aNmax[5];

