//----- (00000001405532D0) ----------------------------------------------------
int* __fastcall sub_1405532D0(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
	int* result; // rax
	__int64 v7; // r10
	int* v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // r11
	int* v12; // [rsp+20h] [rbp-38h] BYREF
	_QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF
	int* v14; // [rsp+60h] [rbp+8h] BYREF

	result = *(int**)(a1 + 96);
	v7 = *((_QWORD*)result + 1);
	v9 = result;
	v10 = (__int64)result;
	v11 = v7;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if ((int*)v10 == result || (v14 = (int*)v10, a2 < *(_DWORD*)(v10 + 32)))
		v14 = result;
	if (v14 == result)
	{
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < a2)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				result = (int*)v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (result == v9 || a2 < result[8])
		{
			LODWORD(v13[0]) = a2;
			v13[1] = 0i64;
			v14 = result;
			sub_140055C60(a1 + 88, &v12, (__int64*)&v14, v13);
			result = v12;
		}
		*((_QWORD*)result + 5) = a4;
		*(_DWORD*)(a1 + 20) = a3;
	}
	else
	{
		*(_DWORD*)(a1 + 20) = a3;
	}
	return result;
}

