//----- (00000001405AD890) ----------------------------------------------------
void __fastcall sub_1405AD890(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int64 a5)
{
	__int64 v7; // rsi
	__int64 v9; // r14
	__int64 v10; // r12
	__int64 v11; // rsi
	__int64 v12; // r14
	_DWORD* v13; // rcx
	_DWORD* v14; // rcx
	FILETIME v15; // [rsp+20h] [rbp-28h] BYREF

	v7 = a2;
	if (a2 < *(_DWORD*)(a1 + 272))
	{
		v9 = sub_140205FA0(a3);
		if (v9)
		{
			if (!(_DWORD)v7 && !*(_DWORD*)(a5 + 64))
				sub_1401E4300(a1 + 200);
			v10 = v7;
			v11 = 192 * v7;
			*(_DWORD*)(*(_QWORD*)(a1 + 232) + v11 + 8) = a3;
			*(_DWORD*)(*(_QWORD*)(a1 + 232) + v11 + 4) = *(_DWORD*)(v9 + 4);
			v12 = v11 + *(_QWORD*)(a1 + 232) + 16i64;
			if (v12 && (int)sub_1401E82F0((__int64*)&v15, *(float*)(a5 + 60)) >= 0)
				sub_1401E8230(v12, v15);
			sub_1405A9D10(v11 + *(_QWORD*)(a1 + 232), *(float*)(a5 + 76), *(float*)(a5 + 72));
			v13 = (_DWORD*)(v11 + *(_QWORD*)(a1 + 232));
			if (a4 != v13[3])
			{
				if (a4)
					sub_1405A9920(v13);
			}
			*(_DWORD*)(*(_QWORD*)(a1 + 232) + v11 + 12) = a4;
			v14 = *(_DWORD**)(*(_QWORD*)(a1 + 248) + 8 * v10);
			*v14 = *(_DWORD*)a5;
			v14[1] = *(_DWORD*)(a5 + 4);
			v14[2] = *(_DWORD*)(a5 + 8);
			v14[3] = *(_DWORD*)(a5 + 12);
			v14[4] = *(_DWORD*)(a5 + 16);
			v14[5] = *(_DWORD*)(a5 + 20);
			v14[6] = *(_DWORD*)(a5 + 24);
			v14[7] = *(_DWORD*)(a5 + 28);
			v14[8] = *(_DWORD*)(a5 + 32);
			v14[9] = *(_DWORD*)(a5 + 36);
			v14[10] = *(_DWORD*)(a5 + 40);
			v14[11] = *(_DWORD*)(a5 + 44);
			v14[12] = *(_DWORD*)(a5 + 48);
			v14[13] = *(_DWORD*)(a5 + 52);
			v14[14] = *(_DWORD*)(a5 + 56);
			v14[15] = *(_DWORD*)(a5 + 60);
			v14[16] = *(_DWORD*)(a5 + 64);
			v14[17] = *(_DWORD*)(a5 + 68);
			v14[18] = *(_DWORD*)(a5 + 72);
			v14[19] = *(_DWORD*)(a5 + 76);
		}
	}
}

