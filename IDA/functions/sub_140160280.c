//----- (0000000140160280) ----------------------------------------------------
void __fastcall sub_140160280(__int64 a1, int a2)
{
	int v2; // esi
	__int64 v3; // r10
	__int64 v5; // rax
	int v6; // ebp
	int v7; // r14d
	int v8; // r8d
	int v9; // edi
	__int64 v10; // r11
	int v11; // r9d
	__int64 i; // rdx
	int v13; // eax
	int v14; // ecx
	int v15; // ecx
	__int64 v16; // rcx
	int v17; // eax

	if (a2 >= 0)
	{
		v2 = *(_DWORD*)(a1 + 1160);
		v3 = a2;
		if (a2 < v2)
		{
			v5 = *(_QWORD*)(a1 + 472);
			v6 = *(_DWORD*)(a1 + 720);
			v7 = 0;
			v8 = v6;
			if (v5)
				v9 = *(_DWORD*)(v5 + 1300);
			else
				v9 = 0;
			v10 = *(_QWORD*)(a1 + 664);
			if ((v10 & 2) != 0)
			{
				v6 += *(_DWORD*)(a1 + 1024);
				v8 = v6;
			}
			if ((v10 & 4) != 0)
			{
				v11 = 0;
				for (i = 0i64; i < v3; ++v11)
				{
					if (i < 0 || v11 >= v2)
						v13 = *(_DWORD*)(a1 + 1028);
					else
						v13 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * i) + 12i64);
					++i;
					v8 += v13;
				}
				v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v3) + 12i64) + v8;
			}
			else
			{
				v15 = *(_DWORD*)(a1 + 1028);
				v8 += a2 * v15;
				v14 = v8 + v15;
			}
			if (v8 - v9 <= v6)
				v9 = v8 - v6;
			if (v14 - v9 > *(_DWORD*)(a1 + 728))
				v9 = v14 - *(_DWORD*)(a1 + 728);
			if (sub_1400C6E00(a1))
			{
				v16 = *(_QWORD*)(a1 + 472);
				v17 = *(_DWORD*)(v16 + 1296);
				if (v9 < v17)
					v17 = v9;
				if (v17 > 0)
					v7 = v17;
				*(_BYTE*)(v16 + 1392) |= 0x10u;
				*(_DWORD*)(v16 + 1300) = v7;
				sub_1400CAC90((_QWORD*)a1);
			}
		}
	}
}
// 140160315: conditional instruction was optimized away because r11.1!=0
// 14016033E: conditional instruction was optimized away because r11.1!=0

