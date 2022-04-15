//----- (000000014029C410) ----------------------------------------------------
__int64 __fastcall sub_14029C410(__int64 a1)
{
	__int64 v1; // rdi
	unsigned int v3; // ebx
	__int64 v4; // rax
	__int64 result; // rax
	int v6; // ecx
	int v7[5]; // [rsp+20h] [rbp-38h] BYREF
	int v8; // [rsp+34h] [rbp-24h]

	v1 = *(_QWORD*)(a1 + 64);
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 16i64))(v1);
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 32i64))(v1);
	result = D3DXGetImageInfoFromFileInMemory(v4, v3, v7);
	if ((int)result >= 0)
	{
		switch (v8)
		{
		case 3:
			*(_DWORD*)(a1 + 24) = 0;
			break;
		case 4:
			*(_DWORD*)(a1 + 24) = 1;
			break;
		case 5:
			*(_DWORD*)(a1 + 24) = 2;
			break;
		default:
			return 2147500037i64;
		}
		v6 = v7[4];
		*(_DWORD*)(a1 + 28) = v7[0];
		*(_DWORD*)(a1 + 32) = v7[1];
		*(_DWORD*)(a1 + 36) = v7[2];
		*(_DWORD*)(a1 + 40) = v7[3];
		*(_DWORD*)(a1 + 44) = sub_14026C430(v6);
		return 0i64;
	}
	return result;
}
// 140C65700: using guessed type __int64 (__fastcall *D3DXGetImageInfoFromFileInMemory)(_QWORD, _QWORD, _QWORD);

