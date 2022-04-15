#include "../winhttp.h"

//----- (00000001408413C0) ----------------------------------------------------
__int64 __fastcall sub_1408413C0(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned int v6; // ebx
	unsigned int v7; // eax
	bool v8; // cf
	bool v9; // r14
	int v10; // r15d
	__int64 v11; // r9
	struct _RTL_CRITICAL_SECTION* v12; // rax
	struct _RTL_CRITICAL_SECTION* v13; // rax
	struct _RTL_CRITICAL_SECTION* v14; // rax
	struct _RTL_CRITICAL_SECTION* v15; // rax
	struct _RTL_CRITICAL_SECTION* v16; // rax
	char v18; // [rsp+20h] [rbp-10h] BYREF
	unsigned int v19; // [rsp+21h] [rbp-Fh]
	unsigned int v20; // [rsp+70h] [rbp+40h] BYREF
	unsigned int v21; // [rsp+88h] [rbp+58h] BYREF

	v20 = 0;
	v6 = sub_14083C5D0(a1, (int*)&v20, 4u);
	v7 = v20;
	if (v6 == 1 && v20)
	{
		v8 = sub_140892EF0(a2 + 88, v20) != 0;
		v7 = v20;
		v6 = 2 - v8;
	}
	v9 = 0;
	v10 = 0;
	if (v7)
	{
		while (1)
		{
			if (v6 != 1)
				return v6;
			v6 = sub_14083C5D0(a1, (int*)&v18, 5u);
			if (v6 == 1)
			{
				switch (v18)
				{
				case 1:
					v6 = sub_140841ED0(a1, (__int64)&v18, a2);
					break;
				case 2:
					v6 = sub_14083D3D0(a1, (__int64)&v18, a2);
					break;
				case 3:
					v6 = sub_140841A40(a1, (__int64)&v18, a2);
					break;
				case 4:
					v6 = sub_140841DC0(a1, (__int64)&v18, a2);
					break;
				case 5:
					v12 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
					v6 = sub_14083DC30(a1, (__int64)&v18, a2, v12);
					break;
				case 6:
					v13 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
					v6 = sub_14083DD30(a1, (__int64)&v18, a2, v13);
					break;
				case 7:
					v15 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
					v6 = sub_14083D530(a1, (__int64)&v18, a2, v15);
					break;
				case 8:
					v6 = sub_140841CA0(a1, (__int64)&v18, a2);
					break;
				case 9:
					v14 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
					v6 = sub_14083DB30(a1, (__int64)&v18, a2, v14);
					break;
				case 14:
					v6 = sub_14083D630(a1, (__int64)&v18, a2, (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552));
					break;
				case 15:
					v6 = sub_14083D730(a1, (__int64)&v18, a2, (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 12736));
					break;
				case 16:
					v16 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 1);
					v6 = sub_14083D830(a1, (__int64)&v18, a2, v16);
					break;
				case 17:
					v6 = sub_14083D290(a1, (__int64)&v18, a2);
					break;
				case 18:
					v6 = sub_14083DA30(a1, (__int64)&v18, a2, (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328));
					break;
				case 19:
					v6 = sub_14083D930(a1, (__int64)&v18, a2, qword_140C61BA8 + 398);
					break;
				case 20:
					v6 = sub_140841B90(a1, (__int64)&v18, a2);
					break;
				default:
					if (!qword_140C61B40)
					{
						if (!v9)
							v9 = (unsigned __int8)(v18 - 10) <= 3u;
					LABEL_29:
						v21 = 0;
						sub_14083CB00(a1, v19, &v21, v11);
						if (v21 != v19)
							v6 = 7;
						break;
					}
					v6 = qword_140C61B40(&v18, a2, a3);
					if (v6 == 3)
						goto LABEL_29;
					break;
				}
			}
			if (++v10 >= v20)
				return v6;
		}
	}
	return v6;
}
// 140C61B40: invalid function type has been ignored
// 1408416AD: variable 'v11' is possibly undefined
// 140C61B40: using guessed type __int64 (__fastcall *qword_140C61B40)(_QWORD, _QWORD, _QWORD);

