//----- (00000001408F5A80) ----------------------------------------------------
__int64 __fastcall sub_1408F5A80(__int64 a1)
{
	int v1; // r11d
	unsigned int v2; // r9d
	unsigned int v3; // ebx
	__int64 v4; // r8
	unsigned int v5; // edx
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // r8
	__int64 v12; // rdx
	__int64 result; // rax
	__int64 v14; // r8
	unsigned int v15; // edx
	__int64 v16; // rdx

	v1 = *(_DWORD*)(a1 + 196);
	v2 = 0;
	if (v1 >= 4)
	{
		v3 = 1;
		do
		{
			v4 = v2 & 3;
			v5 = v2 >> 2;
			v2 += 4;
			v6 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * v5;
			*(_DWORD*)(v6 + 4 * v4 + 16) = 0;
			*(_DWORD*)(v6 + 4 * v4) = *(_DWORD*)(v6 + 4 * v4 + 32);
			v7 = v3 & 3;
			v8 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * (v3 >> 2);
			*(_DWORD*)(v8 + 4 * v7 + 16) = 0;
			*(_DWORD*)(v8 + 4 * v7) = *(_DWORD*)(v8 + 4 * v7 + 32);
			v9 = ((_BYTE)v3 + 1) & 3;
			v10 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * ((v3 + 1) >> 2);
			*(_DWORD*)(v10 + 4 * v9 + 16) = 0;
			*(_DWORD*)(v10 + 4 * v9) = *(_DWORD*)(v10 + 4 * v9 + 32);
			v11 = ((_BYTE)v3 - 2) & 3;
			LODWORD(v10) = v3 + 2;
			v3 += 4;
			v12 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * ((unsigned int)v10 >> 2);
			*(_DWORD*)(v12 + 4 * v11 + 16) = 0;
			result = *(unsigned int*)(v12 + 4 * v11 + 32);
			*(_DWORD*)(v12 + 4 * v11) = result;
		} while (v2 < v1 - 3);
	}
	for (; v2 < v1; *(_DWORD*)(v16 + 4 * v14) = result)
	{
		v14 = v2 & 3;
		v15 = v2++ >> 2;
		v16 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * v15;
		result = *(unsigned int*)(v16 + 4 * v14 + 32);
		*(_DWORD*)(v16 + 4 * v14 + 16) = 0;
	}
	return result;
}

