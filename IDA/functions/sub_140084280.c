//----- (0000000140084280) ----------------------------------------------------
__int64 __fastcall sub_140084280(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 i; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 >= 0)
	{
		if (a3 == -8)
		{
			return (unsigned int)-2147467259;
		}
		else
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if (v7 >= 0)
				v7 = sub_14006C120(a1, (__int64*)(a3 + 16), v8);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
				if (v7 >= 0)
				{
					v9 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 24));
					*(_QWORD*)(a3 + 32) = v9;
					if (!v9)
						return 2147500037i64;
					for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 24); i = (unsigned int)(i + 1))
					{
						v7 = sub_1400AD150(a1, v10, *(_QWORD*)(a3 + 32) + 8 * i);
						if (v7 < 0)
							break;
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 1400842FD: variable 'v8' is possibly undefined
// 14008435B: variable 'v10' is possibly undefined

