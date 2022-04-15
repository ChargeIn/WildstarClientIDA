//----- (00000001408EE7B0) ----------------------------------------------------
__int64 __fastcall sub_1408EE7B0(__int64 a1, __int64 a2, _DWORD* a3, int* a4)
{
	int v7; // esi
	int v8; // r10d
	__int64 v9; // r14
	int i; // r8d
	__int64 v11; // rcx
	int v12; // ebx
	int v13; // ebx
	int v14; // edi

	if (a3)
	{
		v7 = 1;
		v8 = 0;
		v9 = 1i64;
		for (i = *a3 * *(_DWORD*)(a2 + 56); v7 < *(_DWORD*)(a2 + 52); ++v9)
		{
			v11 = *(char*)(v9 + *(_QWORD*)(a2 + 24));
			v12 = a3[v11] & 0x7FFF;
			if (v12 == a3[v11])
			{
				v13 = *(_DWORD*)(a2 + 56) * v12;
				v14 = *(unsigned __int16*)(*(_QWORD*)(a2 + 16) + 2 * v11);
				sub_1408EEA90(v8, v14, i, v13, (__int64)a4);
				v8 = v14;
				i = v13;
			}
			++v7;
		}
		return 1i64;
	}
	else
	{
		sub_1407E4830(a4, 0i64, (unsigned int)(4 * (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 4i64 * *(int*)(a1 + 148)) / 2)));
		return 0i64;
	}
}

