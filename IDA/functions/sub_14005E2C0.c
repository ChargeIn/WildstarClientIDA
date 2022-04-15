//----- (000000014005E2C0) ----------------------------------------------------
__int64 __fastcall sub_14005E2C0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // r14
	__int64 v4; // rbx
	unsigned __int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rbp
	__int64* v8; // rax
	__int64 v9; // r8
	__int64 v10; // rbp
	__int64* v11; // rdx
	unsigned __int64 v12; // rax
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 32);
	v3 = (unsigned int)(10 * *(_DWORD*)(v1 + 148));
	if (!(10 * *(_DWORD*)(v1 + 148)))
		v3 = 0x7FFFFFFFFFFFFFFEi64;
	*(_QWORD*)(v1 + 136) += *(_QWORD*)(v1 + 120) - *(_QWORD*)(v1 + 112);
	do
	{
		v4 = *(_QWORD*)(a1 + 32);
		switch (*(_BYTE*)(v4 + 33))
		{
		case 0:
			sub_14005DEB0(a1);
			goto LABEL_24;
		case 1:
			if (!*(_QWORD*)(v4 + 56))
			{
				sub_14005DF40(a1);
				goto LABEL_24;
			}
			v6 = sub_14005D180(*(_QWORD*)(a1 + 32));
			break;
		case 2:
			v9 = *(int*)(v4 + 36);
			v10 = *(_QWORD*)(v4 + 120);
			v11 = (__int64*)(*(_QWORD*)v4 + 8 * v9);
			*(_DWORD*)(v4 + 36) = v9 + 1;
			sub_14005D6E0(a1, v11, -3i64);
			if (*(_DWORD*)(v4 + 36) >= *(_DWORD*)(v4 + 12))
				*(_BYTE*)(v4 + 33) = 3;
			*(_QWORD*)(v4 + 128) += *(_QWORD*)(v4 + 120) - v10;
			v6 = 10i64;
			break;
		case 3:
			v7 = *(_QWORD*)(v4 + 120);
			v8 = sub_14005D6E0(a1, *(__int64**)(v4 + 48), 40i64);
			*(_QWORD*)(v4 + 48) = v8;
			if (!*v8)
			{
				sub_14005D920(a1);
				*(_BYTE*)(v4 + 33) = 4;
			}
			*(_QWORD*)(v4 + 128) += *(_QWORD*)(v4 + 120) - v7;
			v6 = 400i64;
			break;
		case 4:
			if (!*(_QWORD*)(v4 + 80))
			{
				*(_BYTE*)(v4 + 33) = 0;
				*(_QWORD*)(v4 + 136) = 0i64;
			LABEL_24:
				v6 = 0i64;
				break;
			}
			sub_14005D9C0(a1);
			v5 = *(_QWORD*)(v4 + 128);
			if (v5 > 0x64)
				*(_QWORD*)(v4 + 128) = v5 - 100;
			v6 = 100i64;
			break;
		default:
			goto LABEL_24;
		}
		v3 -= v6;
	} while (*(_BYTE*)(v1 + 33) && v3 > 0);
	if (*(_BYTE*)(v1 + 33))
	{
		v12 = *(_QWORD*)(v1 + 136);
		if (v12 >= 0x400)
		{
			*(_QWORD*)(v1 + 136) = v12 - 1024;
			result = *(_QWORD*)(v1 + 120);
		}
		else
		{
			result = *(_QWORD*)(v1 + 120) + 1024i64;
		}
		*(_QWORD*)(v1 + 112) = result;
	}
	else
	{
		result = *(int*)(v1 + 144);
		*(_QWORD*)(v1 + 112) = result * (*(_QWORD*)(v1 + 128) / 0x64ui64);
	}
	return result;
}

