#include "../winhttp.h"

//----- (000000014087F380) ----------------------------------------------------
__int64 __fastcall sub_14087F380(unsigned __int16* a1, __int64 a2)
{
	unsigned int v2; // r8d
	unsigned int v5; // r8d
	unsigned int v6; // r8d
	unsigned int v7; // r8d
	unsigned int v8; // r8d
	unsigned int v9; // r8d
	_QWORD** v10; // rax
	_QWORD* i; // rbx
	__int64 v12; // rax
	__int64 v13; // rdi
	unsigned int v15; // r8d
	unsigned int v16; // r8d
	unsigned int v17; // r8d
	unsigned int v18; // r8d
	unsigned int v19; // r8d
	unsigned int v20; // r8d
	unsigned int v21; // r8d
	__int64 v22; // rbp
	__int64 v23; // rbx
	__int64** v24; // rdi
	unsigned int v25; // r8d
	unsigned int v26; // r8d
	unsigned int v27; // r8d
	__int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rbx
	unsigned int v34; // r8d
	unsigned int v35; // r8d
	_QWORD** v36; // rax
	_QWORD* j; // rbx
	__int64 v38; // rax
	__int64 v39; // rdi
	__int64 v40; // rbp
	__int64 v41; // rbx
	__int64** v42; // rdi
	__int64 v43; // rax
	__int64 v44; // rbx

	v2 = a1[30];
	if (v2 > 0xB02)
	{
		if (a1[30] > 0xE02u)
		{
			if (a1[30] <= 0xF02u)
			{
				if (v2 != 3842)
				{
					if (v2 != 3587)
						return 1i64;
					goto LABEL_57;
				}
				goto LABEL_59;
			}
			if (a1[30] <= 0xF08u)
			{
				if (v2 != 3848)
				{
					v34 = v2 - 3843;
					if (v34)
					{
						v35 = v34 - 1;
						if (v35)
						{
							if (v35 != 1)
								return 1i64;
							goto LABEL_66;
						}
						goto LABEL_72;
					}
					goto LABEL_82;
				}
			LABEL_43:
				sub_14087F860((__int64)a1, (_QWORD**)qword_140C61BA0);
				v22 = qword_140C61BA0;
				LODWORD(v23) = 0;
				v24 = *(__int64***)(qword_140C61BA0 + 56);
				if (v24)
				{
					do
					{
					LABEL_85:
						sub_14087F860((__int64)a1, (_QWORD**)*v24[2]);
						v24 = (__int64**)*v24;
					} while (v24);
					while (1)
					{
						v23 = (unsigned int)(v23 + 1);
						if ((unsigned int)v23 >= 0xC1)
							break;
						v24 = *(__int64***)(v22 + 8 * v23 + 56);
						if (v24)
							goto LABEL_85;
					}
				}
				else
				{
					while (1)
					{
						v23 = (unsigned int)(v23 + 1);
						if ((unsigned int)v23 >= 0xC1)
							break;
						v24 = *(__int64***)(qword_140C61BA0 + 8 * v23 + 56);
						if (v24)
							goto LABEL_85;
					}
				}
				return 1i64;
			}
			if (v2 != 3849)
			{
				if (a1[30] > 0x1301u)
				{
					if (a1[30] <= 0x1303u)
					{
						(*(void(__fastcall**)(unsigned __int16*, _QWORD, _QWORD))(*(_QWORD*)a1 + 112i64))(
							a1,
							0i64,
							*(_QWORD*)(a2 + 72));
					}
					else if (v2 - 5122 <= 1)
					{
						(*(void(__fastcall**)(unsigned __int16*, _QWORD, _QWORD))(*(_QWORD*)a1 + 128i64))(
							a1,
							0i64,
							*(_QWORD*)(a2 + 72));
					}
				}
				return 1i64;
			}
		}
		else
		{
			if (v2 == 3586)
				goto LABEL_52;
			if (a1[30] > 0xB09u)
			{
				v25 = v2 - 3074;
				if (v25)
				{
					v26 = v25 - 256;
					if (!v26)
						goto LABEL_59;
					v27 = v26 - 2;
					if (!v27)
						goto LABEL_72;
					if (v27 != 4)
						return 1i64;
					goto LABEL_43;
				}
			LABEL_52:
				v28 = sub_140855940((__int64)a1);
				v29 = v28;
				if (v28)
				{
					(*(void(__fastcall**)(unsigned __int16*, __int64))(*(_QWORD*)a1 + 120i64))(a1, v28);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
				}
				return 1i64;
			}
			if (v2 != 2825)
			{
				v19 = v2 - 2819;
				if (!v19)
					goto LABEL_82;
				v20 = v19 - 1;
				if (!v20)
					goto LABEL_72;
				v21 = v20 - 1;
				if (!v21)
					goto LABEL_66;
				if (v21 != 3)
					return 1i64;
				goto LABEL_43;
			}
		}
	LABEL_15:
		v10 = *(_QWORD***)(a2 + 72);
		if (*v10)
		{
			for (i = (_QWORD*)**v10; i; i = (_QWORD*)*i)
			{
				v12 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
				v13 = v12;
				if (v12)
				{
					(*(void(__fastcall**)(unsigned __int16*, __int64, _QWORD))(*(_QWORD*)a1 + 152i64))(
						a1,
						v12,
						*(_QWORD*)(a2 + 72));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
				}
			}
		}
		return 1i64;
	}
	if (v2 == 2818)
		goto LABEL_59;
	if (a1[30] > 0x802u)
	{
		if (a1[30] <= 0x902u)
		{
			if (v2 != 2306)
			{
				if (v2 != 2051)
					return 1i64;
				goto LABEL_57;
			}
		LABEL_59:
			v32 = sub_140855940((__int64)a1);
			v33 = v32;
			if (v32)
			{
				(*(void(__fastcall**)(unsigned __int16*, __int64))(*(_QWORD*)a1 + 136i64))(a1, v32);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
			}
			return 1i64;
		}
		if (a1[30] <= 0x908u)
		{
			if (v2 != 2312)
			{
				v15 = v2 - 2307;
				if (v15)
				{
					v16 = v15 - 1;
					if (v16)
					{
						if (v16 != 1)
							return 1i64;
						goto LABEL_66;
					}
					goto LABEL_72;
				}
			LABEL_82:
				v43 = sub_140855940((__int64)a1);
				v44 = v43;
				if (v43)
				{
					(*(void(__fastcall**)(unsigned __int16*, __int64, _QWORD))(*(_QWORD*)a1 + 128i64))(
						a1,
						v43,
						*(_QWORD*)(a2 + 72));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 16i64))(v44);
				}
				return 1i64;
			}
			goto LABEL_43;
		}
		v17 = v2 - 2313;
		if (v17)
		{
			v18 = v17 - 249;
			if (v18)
			{
				if (v18 != 1)
					return 1i64;
			LABEL_57:
				v30 = sub_140855940((__int64)a1);
				v31 = v30;
				if (v30)
				{
					(*(void(__fastcall**)(unsigned __int16*, __int64, _QWORD))(*(_QWORD*)a1 + 112i64))(
						a1,
						v30,
						*(_QWORD*)(a2 + 72));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				}
				return 1i64;
			}
			goto LABEL_52;
		}
		goto LABEL_15;
	}
	if (v2 == 2050)
		goto LABEL_52;
	if (a1[30] <= 0x702u)
	{
		if (v2 != 1794)
		{
			v5 = v2 - 1538;
			if (v5)
			{
				if (v5 != 1)
					return 1i64;
				goto LABEL_57;
			}
			goto LABEL_52;
		}
		goto LABEL_59;
	}
	v6 = v2 - 1795;
	if (!v6)
		goto LABEL_82;
	v7 = v6 - 1;
	if (v7)
	{
		v8 = v7 - 1;
		if (v8)
		{
			v9 = v8 - 3;
			if (v9)
			{
				if (v9 != 1)
					return 1i64;
				goto LABEL_15;
			}
			goto LABEL_43;
		}
	LABEL_66:
		v36 = *(_QWORD***)(a2 + 72);
		if (*v36)
		{
			for (j = (_QWORD*)**v36; j; j = (_QWORD*)*j)
			{
				v38 = sub_140830EE0(qword_140C61BA8, (__int64)(j + 1));
				v39 = v38;
				if (v38)
				{
					(*(void(__fastcall**)(unsigned __int16*, __int64, _QWORD))(*(_QWORD*)a1 + 128i64))(
						a1,
						v38,
						*(_QWORD*)(a2 + 72));
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
				}
			}
		}
		return 1i64;
	}
LABEL_72:
	sub_14087F8D0((__int64)a1, (_QWORD**)qword_140C61BA0);
	v40 = qword_140C61BA0;
	LODWORD(v41) = 0;
	v42 = *(__int64***)(qword_140C61BA0 + 56);
	if (v42)
	{
		do
		{
		LABEL_77:
			sub_14087F8D0((__int64)a1, (_QWORD**)*v42[2]);
			v42 = (__int64**)*v42;
		} while (v42);
		while (1)
		{
			v41 = (unsigned int)(v41 + 1);
			if ((unsigned int)v41 >= 0xC1)
				break;
			v42 = *(__int64***)(v40 + 8 * v41 + 56);
			if (v42)
				goto LABEL_77;
		}
	}
	else
	{
		while (1)
		{
			v41 = (unsigned int)(v41 + 1);
			if ((unsigned int)v41 >= 0xC1)
				break;
			v42 = *(__int64***)(qword_140C61BA0 + 8 * v41 + 56);
			if (v42)
				goto LABEL_77;
		}
	}
	return 1i64;
}
// 14087F739: conditional instruction was optimized away because rdi.8==0
// 14087F779: conditional instruction was optimized away because rdi.8==0
// 14087F7B6: conditional instruction was optimized away because rdi.8==0
// 14087F7F9: conditional instruction was optimized away because rdi.8==0
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

