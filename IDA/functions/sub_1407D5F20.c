//----- (00000001407D5F20) ----------------------------------------------------
__int64 __fastcall sub_1407D5F20(__int64 a1, unsigned int* a2, unsigned int a3, _DWORD* a4, _DWORD* a5, float* a6)
{
	__int64 v9; // rdx
	unsigned int v10; // ecx
	unsigned int* v11; // rax
	__int64 v12; // r10
	bool v13; // zf
	unsigned int v14; // r8d
	int v15; // ecx
	int v16; // eax

	if (!a3)
		return 0i64;
	if (a3 == 1)
	{
		*a4 = 0;
		*a5 = 0;
		*a6 = 0.0;
		return 1i64;
	}
	else
	{
		v9 = 0i64;
		v10 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64);
		v11 = a2;
		do
		{
			if (*v11 > v10)
				break;
			v9 = (unsigned int)(v9 + 1);
			++v11;
		} while ((unsigned int)v9 < a3);
		if ((_DWORD)v9)
		{
			v12 = (unsigned int)(v9 - 1);
		}
		else
		{
			v12 = a3 - 1;
			v10 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 1312i64) + 86400;
		}
		v13 = (_DWORD)v9 == a3;
		v14 = a2[v12];
		if (v13)
			v9 = 0i64;
		v15 = v10 - v14;
		v16 = a2[v9] - v14;
		if ((unsigned int)v12 > (unsigned int)v9)
			v16 += 86400;
		*a4 = v12;
		*a5 = v9;
		*a6 = (float)v15 / (float)v16;
		return 2i64;
	}
}
// 1407D5F75: conditional instruction was optimized away because r8d.4>=2u

