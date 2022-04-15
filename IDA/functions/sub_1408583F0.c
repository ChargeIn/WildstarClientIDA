//----- (00000001408583F0) ----------------------------------------------------
__int64 __fastcall sub_1408583F0(_BYTE* a1, __int64 a2, int a3, __int64 a4, char a5)
{
	__int64 result; // rax
	__int64 v7; // rcx
	__int128 v8; // [rsp+20h] [rbp-58h] BYREF
	int v9; // [rsp+30h] [rbp-48h]
	int v10[2]; // [rsp+40h] [rbp-38h] BYREF
	__int128 v11; // [rsp+48h] [rbp-30h]
	int v12; // [rsp+58h] [rbp-20h]
	__int64 v13; // [rsp+60h] [rbp-18h]
	int* v14; // [rsp+88h] [rbp+10h] BYREF
	int v15; // [rsp+90h] [rbp+18h] BYREF

	v15 = a3;
	v14 = (int*)(a2 + 4);
	result = sub_14083FD40(&v14, &v15, (__int64)v10);
	if ((_DWORD)result == 1)
	{
		v7 = (__int64)(a1 + 168);
		if (v13)
		{
			sub_1408564B0(v7, v11);
		}
		else
		{
			v9 = v12;
			v8 = v11;
			sub_1408566F0(v7, v10[1], &v8);
		}
		return sub_1408546E0(a1, (unsigned int**)&v14, &v15, a5);
	}
	return result;
}

