//----- (0000000140841040) ----------------------------------------------------
__int64 __fastcall sub_140841040(__int64 a1, int a2)
{
	unsigned int v3; // ebx
	unsigned int i; // r14d
	int v5; // esi
	unsigned int j; // esi
	unsigned int v7; // ebx
	int* v8; // rax
	int* v9; // r14
	unsigned int v11; // [rsp+30h] [rbp-30h] BYREF
	unsigned int v12; // [rsp+34h] [rbp-2Ch] BYREF
	int v13; // [rsp+38h] [rbp-28h] BYREF
	float v14; // [rsp+3Ch] [rbp-24h] BYREF
	int v15; // [rsp+40h] [rbp-20h] BYREF
	unsigned int v16; // [rsp+44h] [rbp-1Ch] BYREF
	unsigned int v17; // [rsp+48h] [rbp-18h] BYREF
	unsigned int v18; // [rsp+88h] [rbp+28h] BYREF
	int v19; // [rsp+90h] [rbp+30h] BYREF
	unsigned int v20; // [rsp+98h] [rbp+38h] BYREF

	v3 = 1;
	if (a2)
	{
		v3 = sub_14083C5D0(a1, (int*)&v14, 4u);
		sub_140828AE0(v14, 2);
		if (v3 == 1)
		{
			v3 = sub_14083C5D0(a1, (int*)&v18, 2u);
			sub_140828770(v18, 2);
		}
		v11 = 0;
		if (v3 == 1)
		{
			v3 = sub_14083C5D0(a1, (int*)&v11, 4u);
			if (v3 == 1)
			{
				for (i = 0; i < v11; ++i)
				{
					v18 = 0;
					v13 = 0;
					v20 = 0;
					v3 = sub_14083C5D0(a1, (int*)&v18, 4u);
					if (v3 != 1)
						break;
					v3 = sub_14083C5D0(a1, &v13, 4u);
					if (v3 != 1)
						break;
					v3 = 2 - ((unsigned int)sub_140829DC0((_QWORD*)qword_140C61B78, v18) != 0);
					if (v3 != 1)
						break;
					v3 = sub_14082ACE0(qword_140C61B78, v18, v13);
					if (v3 != 1)
						break;
					v3 = sub_14083C5D0(a1, (int*)&v20, 4u);
					if (v3 != 1)
						break;
					v5 = 0;
					if (v20)
					{
						do
						{
							v3 = sub_14083C5D0(a1, (int*)&v17, 4u);
							if (v3 != 1)
								goto LABEL_19;
							v3 = sub_14083C5D0(a1, (int*)&v16, 4u);
							if (v3 != 1)
								goto LABEL_19;
							v3 = sub_14083C5D0(a1, &v15, 4u);
							if (v3 != 1)
								goto LABEL_19;
							v3 = sub_140829EF0(qword_140C61B78, v18, v17, v16, v15, 0);
							if (v3 != 1)
								goto LABEL_19;
						} while (++v5 < v20);
					}
				}
			LABEL_19:
				v12 = 0;
				if (v3 == 1)
				{
					v3 = sub_14083C5D0(a1, (int*)&v12, 4u);
					if (v3 == 1)
					{
						for (j = 0; j < v12; ++j)
						{
							v3 = sub_14083C5D0(a1, (int*)&v17, 4u);
							if (v3 != 1)
								break;
							v3 = sub_14083C5D0(a1, (int*)&v20, 4u);
							if (v3 != 1)
								break;
							v3 = sub_14083C5D0(a1, (int*)&v18, 4u);
							if (v3 != 1)
								break;
							if (v18)
							{
								v7 = 12 * v18;
								v8 = (int*)sub_1408819F0(dword_140C10F20, 12 * v18);
								v9 = v8;
								if (!v8)
								{
									v3 = 52;
									break;
								}
								v3 = sub_14083C5D0(a1, v8, v7);
								if (v3 == 1)
									v3 = sub_1408354C0(qword_140C61BB0, v17, v20, v9, v18);
								sub_140881720(dword_140C10F20, (__int64)v9);
								if (v3 != 1)
									break;
							}
						}
					}
				}
				v19 = 0;
				if (v3 == 1)
				{
					v3 = sub_14083C5D0(a1, &v19, 4u);
					if (v3 == 1)
					{
						for (; v19; --v19)
						{
							v3 = sub_14083C5D0(a1, (int*)&v20, 4u);
							if (v3 != 1)
								break;
							v3 = sub_14083C5D0(a1, (int*)&v18, 4u);
							if (v3 != 1)
								break;
							sub_140837EF0(qword_140C61BB0, v20, *(float*)&v18);
						}
					}
				}
			}
		}
	}
	return v3;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

