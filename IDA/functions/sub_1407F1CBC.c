#include "../winhttp.h"

//----- (00000001407F1CBC) ----------------------------------------------------
__int64 __fastcall sub_1407F1CBC(int* a1, __int64 a2, int a3, _DWORD* a4, char a5, _OWORD* a6)
{
	int v9; // ebx
	unsigned int v11; // ebx
	__int64 v12; // rax
	int* v13; // rdi
	__int64 v14; // rax
	int v15; // ebx
	int v16; // ebx
	int v17; // eax
	__int64 v18; // rax
	__int64 v20; // [rsp+20h] [rbp-28h] BYREF
	__int64 v21; // [rsp+30h] [rbp-18h]
	char v22; // [rsp+38h] [rbp-10h]

	v9 = a4[1] - 1;
	sub_1407DE348((__int64)&v20, a6);
	if (a1 && a2)
	{
		if (a5 && v9 == a3)
			*(_WORD*)((char*)a1 + (*a4 == 45) + v9) = 48;
		if (*a4 == 45)
		{
			*(_BYTE*)a1 = 45;
			a1 = (int*)((char*)a1 + 1);
		}
		if ((int)a4[1] > 0)
		{
			v13 = (int*)((char*)a1 + (int)a4[1]);
		}
		else
		{
			v12 = sub_1407E1990((__int64)a1);
			sub_1407DB590((int*)((char*)a1 + 1), a1, v12 + 1);
			*(_BYTE*)a1 = 48;
			v13 = (int*)((char*)a1 + 1);
		}
		if (a3 > 0)
		{
			v14 = sub_1407E1990((__int64)v13);
			sub_1407DB590((int*)((char*)v13 + 1), v13, v14 + 1);
			*(_BYTE*)v13 = ***(_BYTE***)(v20 + 240);
			v15 = a4[1];
			if (v15 < 0)
			{
				v16 = -v15;
				if (!a5)
				{
					v17 = v16;
					v16 = a3;
					if (a3 >= v17)
						v16 = v17;
				}
				if (v16)
				{
					v18 = sub_1407E1990((__int64)v13 + 1);
					sub_1407DB590((int*)((char*)v13 + v16 + 1), (int*)((char*)v13 + 1), v18 + 1);
				}
				sub_1407E4830((int*)((char*)v13 + 1), 48i64, v16);
			}
		}
		v11 = 0;
	}
	else
	{
		v11 = 22;
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	if (v22)
		*(_DWORD*)(v21 + 200) &= ~2u;
	return v11;
}

