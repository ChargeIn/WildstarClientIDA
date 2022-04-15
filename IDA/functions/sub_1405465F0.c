//----- (00000001405465F0) ----------------------------------------------------
__int64 __fastcall sub_1405465F0(__int64 a1, __int64* a2, int a3)
{
	__int64 v3; // rbx
	__int64 v6; // rdi
	__int64 result; // rax
	__int64 v8; // rdx
	int v9; // ecx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	bool v13; // zf
	int v14; // [rsp+48h] [rbp+10h] BYREF

	v3 = *a2;
	if (*a2)
	{
		do
		{
			v6 = *(_QWORD*)(v3 + 8);
			sub_14054A2B0(v3, 0i64);
			result = sub_1400EE810(a1 + 576, *(_DWORD**)(v3 + 48));
			v8 = *(_QWORD*)(v3 + 48);
			if ((*(_BYTE*)(v8 + 88) & 0x10) != 0
				|| *(_DWORD*)(v3 + 128)
				|| (*(_DWORD*)(v8 + 68) & 0x100) != 0
				|| !*(_DWORD*)(v8 + 40)
				|| (v9 = *(_DWORD*)(a1 + 844)) != 0 && (result = (unsigned int)(v9 - 7), (unsigned int)result > 1) && v9 != 185
				|| a3)
			{
				v11 = *(_QWORD*)(v3 + 256);
				if (v11)
				{
					v14 = *(_DWORD*)v8;
					result = sub_1400EE810(v11 + 576, &v14);
				}
				if (*(_QWORD*)v3)
				{
					result = *(_QWORD*)(v3 + 8);
					**(_QWORD**)v3 = result;
				}
				v12 = *(_QWORD**)(v3 + 8);
				if (v12)
				{
					result = *(_QWORD*)v3;
					*v12 = *(_QWORD*)v3;
				}
				v13 = *(_DWORD*)(v3 + 36) == 2;
				*(_QWORD*)v3 = 0i64;
				*(_QWORD*)(v3 + 8) = 0i64;
				*(_QWORD*)(v3 + 256) = 0i64;
				if (!v13)
				{
					result = (unsigned int)dword_140C636A8;
					*(_DWORD*)(v3 + 36) = 2;
					*(_DWORD*)(v3 + 76) = result;
				}
			}
			else
			{
				if (*(_QWORD*)v3)
				{
					result = *(_QWORD*)(v3 + 8);
					**(_QWORD**)v3 = result;
				}
				v10 = *(_QWORD**)(v3 + 8);
				if (v10)
				{
					result = *(_QWORD*)v3;
					*v10 = *(_QWORD*)v3;
				}
				*(_QWORD*)v3 = 0i64;
				*(_QWORD*)(v3 + 8) = 0i64;
			}
			v3 = v6;
		} while (v6);
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

