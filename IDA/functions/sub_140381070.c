//----- (0000000140381070) ----------------------------------------------------
__int64 __fastcall sub_140381070(__int64* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r14
	unsigned __int64 i; // rsi
	unsigned __int64 v5; // rbx
	int* v6; // rdi
	_QWORD* v7; // rbx
	__int64 v8; // rdi
	_QWORD v9[16]; // [rsp+20h] [rbp-98h] BYREF

	result = *a1;
	if ((*(_DWORD*)(*a1 + 232) & 0x4000) != 0)
	{
		sub_1407E4830((int*)v9, 0i64, 0x80ui64);
		v3 = a1 + 7;
		for (i = 0i64; i < 0x10; i += 4i64)
		{
			if (*v3)
			{
				v5 = 0i64;
				v6 = (int*)(*v3 + 120i64);
				do
				{
					if (*v6)
						sub_140354790(*a1, *v6, (int**)&v9[i + v5]);
					++v5;
					++v6;
				} while (v5 < 4);
			}
			++v3;
		}
		v7 = a1 + 64;
		v8 = 16i64;
		do
		{
			if (*v7)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
				*v7 = 0i64;
			}
			result = *(_QWORD*)((char*)v7++ + (char*)v9 - (char*)a1 - 512);
			*(v7 - 1) = result;
			--v8;
		} while (v8);
	}
	return result;
}

