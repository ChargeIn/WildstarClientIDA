#include "../winhttp.h"

//----- (00000001402DF540) ----------------------------------------------------
__int64 __fastcall sub_1402DF540(__int64 a1)
{
	_DWORD* v2; // rbx
	unsigned __int64 v3; // rbp
	__int64 result; // rax
	int v5; // eax
	_DWORD* v6; // rbx
	__int64 v7; // r14
	unsigned __int64 v8; // rbp
	unsigned __int64 v9; // rdi
	int v10; // eax
	unsigned __int64 v11; // rbp
	unsigned int* v12; // rbx

	v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1200) + 24i64))(*(_QWORD*)(a1 + 1200));
	v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1200) + 16i64))(*(_QWORD*)(a1 + 1200));
	if (v3 < 8)
		return 2147500037i64;
	if (*v2 == 1095910721)
	{
		v5 = 1;
	}
	else
	{
		if (*v2 != 1634887009)
			return 2147500037i64;
		v5 = 0;
	}
	if (v2[1])
		return 2147500037i64;
	v6 = v2 + 2;
	v7 = v5;
	v8 = v3 - 8;
	if (v8)
	{
		while (1)
		{
			if (v8 < 8)
				return 2147500037i64;
			v9 = (unsigned int)v6[1];
			v10 = *v6;
			v11 = v8 - 8;
			v12 = v6 + 2;
			if (v11 < v9)
				return 2147500037i64;
			if (v10 == 1128812107)
				break;
			switch (v10)
			{
			case 1129665108:
				if (v7)
					result = sub_1402E2F60(v12, v9, (int**)(a1 + 5424));
				else
					result = sub_1402E3010((__int64)v12, v9, *(void(__fastcall****)(_QWORD))(a1 + 1200), (int**)(a1 + 5424));
				if ((int)result < 0)
					return result;
				result = sub_1402DFD40(a1);
				goto LABEL_33;
			case 1145589071:
				if (v7)
					result = sub_1402E2F60(v12, v9, (int**)(a1 + 5384));
				else
					result = sub_1402E3010((__int64)v12, v9, *(void(__fastcall****)(_QWORD))(a1 + 1200), (int**)(a1 + 5384));
				if ((int)result < 0)
					return result;
				result = sub_1402DFB60(a1);
				goto LABEL_33;
			case 1347571568:
				if (v7)
					result = sub_1402E2F60(v12, (unsigned int)v9, (int**)(a1 + 5344));
				else
					result = sub_1402E3010(
						(__int64)v12,
						(unsigned int)v9,
						*(void(__fastcall****)(_QWORD))(a1 + 1200),
						(int**)(a1 + 5344));
				if ((int)result < 0)
					return result;
				result = sub_1402DF980(a1);
				goto LABEL_33;
			}
		LABEL_34:
			v6 = (unsigned int*)((char*)v12 + v9);
			v8 = v11 - v9;
			if (!v8)
				return 0i64;
		}
		if (v7)
			result = sub_1402DF720(a1, v12, v9);
		else
			result = sub_1402DF8A0(a1, v12, v9);
	LABEL_33:
		if ((int)result < 0)
			return result;
		goto LABEL_34;
	}
	return 0i64;
}

