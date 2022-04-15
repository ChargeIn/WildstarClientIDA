//----- (0000000140067740) ----------------------------------------------------
__int64 __fastcall sub_140067740(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	int v6; // r8d
	int v7; // eax
	bool v8; // zf
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned int* v11; // rcx
	int v12; // ecx
	int v13; // ecx
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	int v15; // [rsp+28h] [rbp-40h]
	int v16[4]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v17; // [rsp+40h] [rbp-28h]

	v2 = *(_QWORD*)(a1 + 48);
	sub_140067680(a1, a2);
	LODWORD(result) = *(_DWORD*)(a1 + 16) - 40;
	while (2)
	{
		result = (int)result;
		switch ((int)result)
		{
		case 0:
		case 83:
		case 246:
			sub_14006A700(v2, a2);
			if (*a2 == 12)
			{
				v12 = a2[2];
				if ((v12 & 0x100) == 0 && v12 >= *(unsigned __int8*)(v2 + 74))
					--* (_DWORD*)(v2 + 60);
			}
			v13 = *(_DWORD*)(v2 + 60) + 1;
			if (v13 > *(unsigned __int8*)(*(_QWORD*)v2 + 115i64))
			{
				if (v13 >= 250)
					sub_140062CF0(*(_QWORD*)(v2 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
				*(_BYTE*)(*(_QWORD*)v2 + 115i64) = v13;
			}
			sub_14006A980(v2, a2, (*(_DWORD*)(v2 + 60))++);
			goto LABEL_22;
		case 6:
			sub_140066620(a1, a2);
			goto LABEL_23;
		case 18:
			v8 = *(_DWORD*)(a1 + 32) == 287;
			*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
			if (v8)
			{
				*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
			}
			else
			{
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
				v9 = *(_QWORD*)(a1 + 40);
				*(_DWORD*)(a1 + 32) = 287;
				*(_QWORD*)(a1 + 24) = v9;
			}
			v10 = sub_140065780(a1);
			v11 = *(unsigned int**)(a1 + 48);
			v14 = v10;
			v15 = 4;
			v17 = -1i64;
			v16[0] = 4;
			v16[2] = sub_14006A4A0(v11, (int*)&v14, (__int64)&v14);
			sub_14006ADC0(v2, a2, v16);
		LABEL_22:
			sub_1400674E0(a1, (__int64)a2);
			goto LABEL_23;
		case 51:
			sub_14006A700(v2, a2);
			if (*a2 != 12)
				goto LABEL_8;
			if (a2[4] != a2[5])
			{
				v6 = a2[2];
				if (v6 < *(unsigned __int8*)(v2 + 74))
					LABEL_8:
				sub_14006AAE0(v2, a2);
				else
					sub_14006A980(v2, a2, v6);
			}
			sub_140066710(a1, v16);
			v7 = sub_14006ABD0(v2, (__int64)v16);
			*a2 = 9;
			a2[3] = v7;
		LABEL_23:
			result = (unsigned int)(*(_DWORD*)(a1 + 16) - 40);
			if ((unsigned int)result <= 0xF6)
				continue;
			return result;
		default:
			return result;
		}
	}
}

