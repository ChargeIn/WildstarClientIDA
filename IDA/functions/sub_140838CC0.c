//----- (0000000140838CC0) ----------------------------------------------------
__int64 __fastcall sub_140838CC0(_QWORD* a1, __int64 a2)
{
	_QWORD* v2; // r15
	__int64 v3; // r8
	_QWORD* v4; // rdi
	_QWORD* v5; // rbx
	unsigned __int64 v8; // rbp
	_QWORD* v9; // r9
	__int64 v10; // rcx
	_QWORD* v11; // rdx
	__int64 v12; // rdx
	int v13; // r14d
	__int64 result; // rax
	int v15; // [rsp+28h] [rbp-60h]

	v2 = a1 + 389;
	LODWORD(v3) = 0;
	v4 = 0i64;
	v5 = (_QWORD*)a1[389];
	if (v5)
	{
		while (1)
		{
		LABEL_6:
			while (1)
			{
				v8 = (unsigned __int64)v5;
				if (*v5 != a2)
					break;
				v9 = (_QWORD*)v5[2];
				LODWORD(v10) = v3;
				v11 = v4;
				v15 = v3;
				v5 = v9;
				if (!v9)
				{
					do
					{
						v10 = (unsigned int)(v10 + 1);
						if ((unsigned int)v10 >= 0xC1)
							break;
						v5 = (_QWORD*)v2[v10];
						v11 = 0i64;
					} while (!v5);
					v15 = v10;
				}
				if (v4)
					v4[2] = v9;
				else
					v2[(unsigned int)v3] = v9;
				--* ((_DWORD*)v2 + 386);
				v4 = v11;
				sub_140837930(a1, v8);
				v12 = *(_QWORD*)(v8 + 40);
				v13 = dword_140C10F20;
				if (v12)
				{
					*(_QWORD*)(v8 + 48) = v12;
					sub_140881720(dword_140C10F20, v12);
					*(_QWORD*)(v8 + 40) = 0i64;
					*(_QWORD*)(v8 + 48) = 0i64;
					*(_DWORD*)(v8 + 56) = 0;
				}
				result = sub_140881720(v13, v8);
				LODWORD(v3) = v15;
			LABEL_17:
				if (!v5)
					return result;
			}
			v4 = v5;
			v5 = (_QWORD*)v5[2];
			if (!v5)
			{
				while (1)
				{
					v3 = (unsigned int)(v3 + 1);
					if ((unsigned int)v3 >= 0xC1)
						goto LABEL_17;
					v5 = (_QWORD*)v2[v3];
					v4 = 0i64;
					if (v5)
						goto LABEL_6;
				}
			}
		}
	}
	while (1)
	{
		v3 = (unsigned int)(v3 + 1);
		if ((unsigned int)v3 >= 0xC1)
			return result;
		v5 = (_QWORD*)v2[v3];
		if (v5)
			goto LABEL_6;
	}
}
// 140838D0A: conditional instruction was optimized away because rbx.8==0
// 140C10F20: using guessed type int dword_140C10F20;

