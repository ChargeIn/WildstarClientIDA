//----- (0000000140333FC0) ----------------------------------------------------
__int64 __fastcall sub_140333FC0(__int64 a1, __int64 a2, unsigned int* a3, __int64 a4)
{
	__int64 result; // rax
	unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

	v7 = 0i64;
	result = sub_1403355E0((_QWORD*)(a2 + 96), a3, a4, &v7, 0i64);
	if ((_DWORD)result != 1)
	{
		if ((_DWORD)result)
		{
			return sub_1403315A0(a1, *(_DWORD*)(a2 + 16), 0xCu);
		}
		else if (!*(_QWORD*)(a2 + 776))
		{
			*(_QWORD*)(a2 + 776) = a1 + 240;
			*(_QWORD*)(a2 + 784) = *(_QWORD*)(a1 + 240);
			*(_QWORD*)(a1 + 240) = a2;
			result = *(_QWORD*)(a2 + 784);
			if (result)
				*(_QWORD*)(result + 776) = a2 + 784;
		}
	}
	return result;
}

