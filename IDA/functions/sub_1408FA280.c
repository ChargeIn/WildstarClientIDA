//----- (00000001408FA280) ----------------------------------------------------
__int64 __fastcall sub_1408FA280(__int64 a1)
{
	int v1; // r10d
	unsigned int v3; // r8d
	unsigned int v4; // r11d
	char v5; // al
	unsigned int v6; // edx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 result; // rax
	char v15; // al
	unsigned int v16; // edx
	__int64 v17; // rdx
	__int64 v18; // rcx

	v1 = *(_DWORD*)(a1 + 464);
	v3 = 0;
	if (v1 >= 4)
	{
		v4 = 1;
		do
		{
			v5 = v3;
			v6 = v3;
			v3 += 4;
			v7 = (v5 & 3) + 28i64 * (v6 >> 2);
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v7 + 16) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v7) = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v7 + 32);
			v8 = (v4 & 3) + 28i64 * (v4 >> 2);
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v8 + 16) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v8) = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v8 + 32);
			v9 = (((_BYTE)v4 + 1) & 3) + 28i64 * ((v4 + 1) >> 2);
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v9 + 16) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v9) = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v9 + 32);
			v10 = ((_BYTE)v4 - 2) & 3;
			v11 = (v4 + 2) >> 2;
			v4 += 4;
			v12 = v10 + 28 * v11;
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v12 + 16) = 0;
			v13 = *(_QWORD*)(a1 + 48);
			result = *(unsigned int*)(v13 + 4 * v12 + 32);
			*(_DWORD*)(v13 + 4 * v12) = result;
		} while (v3 < v1 - 3);
	}
	for (; v3 < v1; *(_DWORD*)(v18 + 4 * v17) = result)
	{
		v15 = v3;
		v16 = v3++;
		v17 = (v15 & 3) + 28i64 * (v16 >> 2);
		*(_DWORD*)(*(_QWORD*)(a1 + 48) + 4 * v17 + 16) = 0;
		v18 = *(_QWORD*)(a1 + 48);
		result = *(unsigned int*)(v18 + 4 * v17 + 32);
	}
	return result;
}

