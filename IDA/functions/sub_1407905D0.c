//----- (00000001407905D0) ----------------------------------------------------
__int64 __fastcall sub_1407905D0(__int64 a1, unsigned __int8* a2, char* a3)
{
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 result; // rax
	unsigned __int8 v9; // cl
	char* v10; // rbx
	char* v11; // rax
	char* v12; // rbp
	unsigned __int8 v13; // cl
	char* v14; // rbp
	char v15; // al
	BOOL v16; // ecx
	int v17; // eax
	int v18; // edx

LABEL_1:
	while (2)
	{
		v6 = 0i64;
		while (1)
		{
			if (!*a3)
				return (__int64)a2;
			if (*a3 == 36)
			{
				if (!a3[1])
				{
					if (a2 == *(unsigned __int8**)(a1 + 8))
						return (__int64)a2;
					return v6;
				}
			}
			else
			{
				v7 = (unsigned int)(*a3 - 37);
				switch (*a3)
				{
				case '%':
					v9 = a3[1];
					if (v9 == 98)
					{
						a2 = (unsigned __int8*)sub_1407901C0(a1, a2, a3 + 2);
						if (a2)
						{
							a3 += 4;
							goto LABEL_1;
						}
					}
					else if (v9 == 102)
					{
						v10 = a3 + 2;
						if (*v10 != 91)
							sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aMissingAfterFI, v7, 0i64);
						v11 = sub_14078FDE0(a1, v10);
						v12 = v11;
						if (a2 == *(unsigned __int8**)a1)
							v13 = 0;
						else
							v13 = *(a2 - 1);
						if (!(unsigned int)sub_14078FFD0(v13, (__int64)v10, (unsigned __int64)(v11 - 1))
							&& (unsigned int)sub_14078FFD0(*a2, (__int64)v10, (unsigned __int64)(v12 - 1)))
						{
							a3 = v12;
							goto LABEL_1;
						}
					}
					else
					{
						if (!(unsigned int)sub_1407DE874(v9))
							break;
						a2 = (unsigned __int8*)sub_140790530(a1, (__int64)a2, (unsigned __int8)a3[1]);
						if (a2)
						{
							a3 += 2;
							goto LABEL_1;
						}
					}
					return 0i64;
				case '(':
					if (a3[1] == 41)
						return sub_1407903F0(a1, (__int64)a2, (__int64)(a3 + 2), -2);
					else
						return sub_1407903F0(a1, (__int64)a2, (__int64)(a3 + 1), -1);
				case ')':
					return sub_140790480(a1, (__int64)a2, (__int64)(a3 + 1));
				}
			}
			v14 = sub_14078FDE0(a1, a3);
			if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 8))
				goto LABEL_34;
			v15 = *a3;
			if (*a3 == 37)
			{
				v17 = sub_14078FE80(*a2, (unsigned __int8)a3[1]);
			}
			else
			{
				if (v15 == 46)
					goto LABEL_33;
				if (v15 != 91)
				{
					v16 = (unsigned __int8)*a3 == *a2;
					goto LABEL_32;
				}
				v17 = sub_14078FFD0(*a2, (__int64)a3, (unsigned __int64)(v14 - 1));
			}
			v16 = v17;
		LABEL_32:
			if (v16)
			{
			LABEL_33:
				v18 = 1;
				v6 = 0i64;
				goto LABEL_35;
			}
		LABEL_34:
			v6 = 0i64;
			v18 = 0;
		LABEL_35:
			switch (*v14)
			{
			case '*':
				return sub_140790260(a1, a2, a3, (__int64)v14);
			case '+':
				if (v18)
					return sub_140790260(a1, a2 + 1, a3, (__int64)v14);
				return v6;
			case '-':
				return sub_140790330(a1, a2, a3, (__int64)v14);
			}
			if (*v14 == 63)
				break;
			if (!v18)
				return 0i64;
			++a2;
			a3 = v14;
		}
		if (!v18 || (result = sub_1407905D0(a1, a2 + 1, v14 + 1)) == 0)
		{
			a3 = v14 + 1;
			continue;
		}
		return result;
	}
}

