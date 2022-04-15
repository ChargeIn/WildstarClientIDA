//----- (00000001405E6830) ----------------------------------------------------
__int64 __fastcall sub_1405E6830(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // rax
	unsigned int v6; // r9d
	int v7; // eax
	unsigned int v8; // r9d
	_DWORD* v9; // rdx
	__int64 v10; // r10
	char v11; // cl
	int v12; // ecx
	__int64 v13; // rcx

	*(_DWORD*)(a1 + 1080) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 1084) = *(_DWORD*)(a2 + 20);
	v4 = *(_QWORD*)(a2 + 8);
	if (v4)
	{
		*(_BYTE*)(a1 + 1092) = v4;
		v5 = v4 >> 8;
		*(_BYTE*)(a1 + 1093) = v5;
		v5 >>= 8;
		*(_BYTE*)(a1 + 1094) = v5;
		v5 >>= 8;
		*(_BYTE*)(a1 + 1095) = v5;
		v5 >>= 8;
		*(_BYTE*)(a1 + 1096) = v5;
		v5 >>= 8;
		*(_BYTE*)(a1 + 1097) = v5;
		v5 >>= 8;
		*(_BYTE*)(a1 + 1098) = v5;
		*(_DWORD*)(a1 + 1100) = BYTE1(v5);
	}
	else
	{
		*(_QWORD*)(a1 + 1092) = 0i64;
		*(_DWORD*)(a1 + 1100) = 1;
	}
	v6 = *(_DWORD*)(a2 + 16);
	if (v6)
	{
		v7 = (unsigned __int8)v6;
		v8 = v6 >> 8;
		v9 = (_DWORD*)(a1 + 1108);
		*(_DWORD*)(a1 + 1104) = v7;
		v10 = 5i64;
		do
		{
			v11 = v8;
			v8 >>= 3;
			v12 = v11 & 7;
			if (v12)
				*v9 = 1 << (v12 - 1);
			else
				*v9 = 0;
			++v9;
			--v10;
		} while (v10);
	}
	else
	{
		*(_QWORD*)(a1 + 1104) = 0i64;
		*(_QWORD*)(a1 + 1112) = 0i64;
		*(_QWORD*)(a1 + 1120) = 0i64;
		*(_DWORD*)(a1 + 1104) = 1;
	}
	v13 = qword_140C65898;
	*(_DWORD*)(a1 + 1128) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 1132) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 1136) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 1140) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 1144) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 1148) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 1152) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 1156) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 1160) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 1164) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 1168) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 1172) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 1176) = *(_DWORD*)(a2 + 72);
	return sub_1400EA3E0(*(_QWORD*)(v13 + 29504), "CraftingUpdateCurrent", &unk_1409D135A);
}
// 140C65898: using guessed type __int64 qword_140C65898;

