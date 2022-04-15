//----- (000000014086C9F0) ----------------------------------------------------
__int64 __fastcall sub_14086C9F0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdx
	__int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v6; // r9
	__int64 v7; // r10
	__int64 v8; // rcx
	__int64 v9; // r8
	__int64 result; // rax
	__int64 v11; // rcx
	int v12; // [rsp+28h] [rbp-40h]

	v1 = a1 + 200;
	LODWORD(v2) = 0;
	v3 = 0i64;
	v4 = *(_QWORD*)(a1 + 200);
	if (v4)
	{
		while (1)
		{
		LABEL_6:
			v6 = *(_QWORD*)(v4 + 16);
			v7 = v4;
			LODWORD(v8) = v2;
			v12 = v2;
			v9 = v3;
			v4 = v6;
			if (!v6)
			{
				do
				{
					v8 = (unsigned int)(v8 + 1);
					if ((unsigned int)v8 >= 0x1F)
						break;
					v4 = *(_QWORD*)(v1 + 8 * v8);
					v9 = 0i64;
				} while (!v4);
				v12 = v8;
			}
			*(_QWORD*)(v1 + 8i64 * (unsigned int)v2) = v6;
			--* (_DWORD*)(v1 + 248);
			v3 = v9;
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			if (!v4)
				break;
			LODWORD(v2) = v12;
		}
	}
	else
	{
		while (1)
		{
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= 0x1F)
				break;
			v4 = *(_QWORD*)(v1 + 8 * v2);
			if (v4)
				goto LABEL_6;
		}
	}
	v11 = *(_QWORD*)(a1 + 456);
	if (v11)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 456) = 0i64;
	}
	return result;
}
// 14086CA35: conditional instruction was optimized away because rbx.8==0
// 14086CA72: conditional instruction was optimized away because rbp.8==0

