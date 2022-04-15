#include "../winhttp.h"

//----- (00000001403E0B60) ----------------------------------------------------
__int64 __fastcall sub_1403E0B60(int a1)
{
	int v2; // eax
	int* v3; // rdi
	unsigned int v4; // eax
	unsigned int v5; // edi
	unsigned int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // r10
	int* v11; // rax
	unsigned int v12; // edi
	unsigned int v13; // esi
	__int64 v14; // rax
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // rdx
	__int64 v17; // rax
	int v18; // ecx

	if (!qword_140C65890)
	{
		if (qword_140C63838)
		{
			v2 = qword_140C63838(off_140A6E110, qword_140C63858);
		}
		else
		{
			if (dword_140C64BC0 || (int)sub_14024A1E0() < 0)
				goto LABEL_30;
			v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65460 + 40i64))(qword_140C65460);
		}
		if (v2)
		{
			v3 = sub_14018B280(176i64, 0);
			if (v3)
			{
				v4 = sub_14024A3F0();
				qword_140C65890 = (__int64)sub_14079C320(v3, v4);
			}
			else
			{
				qword_140C65890 = 0i64;
			}
			v5 = 0;
			v6 = sub_14024A3F0();
			if (v6)
			{
				do
				{
					if (qword_140C63848)
					{
						v7 = qword_140C63848(off_140A6E110, v5, qword_140C63858);
					}
					else
					{
						if (dword_140C64BC0)
						{
							v8 = 0i64;
							goto LABEL_20;
						}
						if ((int)sub_14024A1E0() < 0)
						{
							v8 = 0i64;
							goto LABEL_20;
						}
						v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65460 + 32i64))(qword_140C65460, v5);
					}
					v8 = v7;
				LABEL_20:
					if (!a1 || a1 == *(_DWORD*)(v8 + 24))
					{
						v9 = *(_QWORD*)(v8 + 8);
						if (v9)
						{
							if (v9 <= qword_140C3FE70)
								v10 = v9 + qword_140C3FE68;
							else
								v10 = 0i64;
						}
						else
						{
							v10 = 0i64;
						}
						(*(void(__fastcall**)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65890 + 24i64))(
							qword_140C65890,
							v10,
							*(unsigned int*)(v8 + 16),
							*(unsigned int*)(v8 + 28));
					}
					++v5;
				} while (v5 < v6);
			}
		LABEL_47:
			sub_1407E4830(&dword_140C89730, 0i64, 0x2B8ui64);
			dword_140C89730 = 1286;
			qword_140C89738 = 5i64;
			qword_140C89740 = 31i64;
			dword_140C89748 = 39;
			qword_140C89750 = 3i64;
			qword_140C89758 = 17i64;
			dword_140C89760 = 35;
			qword_140C89768 = 3i64;
			qword_140C89770 = 26i64;
			dword_140C89790 = 2;
			qword_140C89798 = 1i64;
			qword_140C897A0 = 17i64;
			dword_140C89880 = 192;
			qword_140C89888 = 0i64;
			qword_140C89890 = 201i64;
			dword_140C898C8 = 192;
			qword_140C898D0 = 0i64;
			qword_140C898D8 = 401i64;
			dword_140C89898 = 128;
			qword_140C898A0 = 0i64;
			qword_140C898A8 = 33i64;
			dword_140C898B0 = 192;
			qword_140C898B8 = 0i64;
			qword_140C898C0 = 401i64;
			dword_140C897A8 = 2;
			qword_140C897B0 = 1i64;
			qword_140C897B8 = 21i64;
			dword_140C897C0 = 39;
			qword_140C897C8 = 3i64;
			qword_140C897D0 = 25i64;
			dword_140C89808 = 192;
			qword_140C89810 = 0i64;
			qword_140C89818 = 500i64;
			dword_140C897D8 = 0;
			qword_140C897E0 = 1i64;
			qword_140C897E8 = 500i64;
			dword_140C897F0 = 0;
			qword_140C897F8 = 1i64;
			qword_140C89800 = 50i64;
			dword_140C89820 = 48;
			qword_140C89828 = 1i64;
			qword_140C89830 = 21i64;
			dword_140C89838 = 130;
			qword_140C89840 = 0i64;
			qword_140C89848 = 500i64;
			dword_140C89850 = 128;
			qword_140C89858 = 0i64;
			qword_140C89860 = 33i64;
			dword_140C89868 = 128;
			qword_140C89870 = 0i64;
			qword_140C89878 = 21i64;
			dword_140C898E0 = 48;
			qword_140C898E8 = 3i64;
			qword_140C898F0 = 33i64;
			dword_140C898F8 = 128;
			qword_140C89900 = 0i64;
			qword_140C89908 = 65i64;
			dword_140C89910 = 128;
			qword_140C89918 = 0i64;
			qword_140C89920 = 129i64;
			dword_140C89928 = 16;
			qword_140C89930 = 5i64;
			qword_140C89938 = 251i64;
			dword_140C89940 = 128;
			qword_140C89948 = 0i64;
			qword_140C89950 = 129i64;
			dword_140C89958 = 1798;
			qword_140C89960 = 5i64;
			qword_140C89968 = 31i64;
			dword_140C89970 = 0;
			qword_140C89978 = 1i64;
			qword_140C89980 = 492i64;
			dword_140C89988 = 278;
			qword_140C89990 = 1i64;
			qword_140C89998 = 29i64;
			dword_140C899A0 = 0;
			qword_140C899A8 = 1i64;
			qword_140C899B0 = 91i64;
			dword_140C899B8 = 64;
			qword_140C899C0 = 1i64;
			if (qword_140C63840)
			{
				v17 = qword_140C63840(off_140A6A408, 1213i64, qword_140C63858);
			}
			else
			{
				if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
					goto LABEL_54;
				v17 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
					qword_140C64C58,
					1213i64);
			}
			if (v17)
			{
				v18 = *(_DWORD*)(v17 + 4);
			LABEL_55:
				dword_140C899D0 = 512;
				qword_140C899D8 = 1i64;
				qword_140C899C8 = v18;
				qword_140C899E0 = 1024i64;
				return 0i64;
			}
		LABEL_54:
			v18 = 500000;
			goto LABEL_55;
		}
	LABEL_30:
		v11 = sub_14018B280(24i64, 0);
		if (v11)
		{
			qword_140C65890 = (__int64)v11;
			*(_QWORD*)v11 = off_140B78268;
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 1) = 0i64;
		}
		else
		{
			qword_140C65890 = 0i64;
		}
		v12 = 0;
		v13 = sub_14024A830();
		if (v13)
		{
			do
			{
				if (qword_140C63848)
				{
					v14 = qword_140C63848(off_140A6E148, v12, qword_140C63858);
				}
				else if (dword_140C640C0)
				{
					v14 = 0i64;
				}
				else if ((int)sub_14024A620() >= 0)
				{
					v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65660 + 32i64))(qword_140C65660, v12);
				}
				else
				{
					v14 = 0i64;
				}
				v15 = *(_QWORD*)(v14 + 8);
				if (v15)
				{
					if (v15 <= qword_140C3FE70)
						v16 = v15 + qword_140C3FE68;
					else
						v16 = 0i64;
				}
				else
				{
					v16 = 0i64;
				}
				(*(void(__fastcall**)(__int64, unsigned __int64, __int64))(*(_QWORD*)qword_140C65890 + 24i64))(
					qword_140C65890,
					v16,
					2i64);
				++v12;
			} while (v12 < v13);
		}
		goto LABEL_47;
	}
	return 0i64;
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140A6E110: using guessed type wchar_t *off_140A6E110[2];
// 140A6E148: using guessed type wchar_t *off_140A6E148[2];
// 140B78268: using guessed type __int64 (__fastcall *off_140B78268[5])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C640C0: using guessed type int dword_140C640C0;
// 140C64BC0: using guessed type int dword_140C64BC0;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65460: using guessed type __int64 qword_140C65460;
// 140C65660: using guessed type __int64 qword_140C65660;
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C89730: using guessed type int dword_140C89730;
// 140C89738: using guessed type __int64 qword_140C89738;
// 140C89740: using guessed type __int64 qword_140C89740;
// 140C89748: using guessed type int dword_140C89748;
// 140C89750: using guessed type __int64 qword_140C89750;
// 140C89758: using guessed type __int64 qword_140C89758;
// 140C89760: using guessed type int dword_140C89760;
// 140C89768: using guessed type __int64 qword_140C89768;
// 140C89770: using guessed type __int64 qword_140C89770;
// 140C89790: using guessed type int dword_140C89790;
// 140C89798: using guessed type __int64 qword_140C89798;
// 140C897A0: using guessed type __int64 qword_140C897A0;
// 140C897A8: using guessed type int dword_140C897A8;
// 140C897B0: using guessed type __int64 qword_140C897B0;
// 140C897B8: using guessed type __int64 qword_140C897B8;
// 140C897C0: using guessed type int dword_140C897C0;
// 140C897C8: using guessed type __int64 qword_140C897C8;
// 140C897D0: using guessed type __int64 qword_140C897D0;
// 140C897D8: using guessed type int dword_140C897D8;
// 140C897E0: using guessed type __int64 qword_140C897E0;
// 140C897E8: using guessed type __int64 qword_140C897E8;
// 140C897F0: using guessed type int dword_140C897F0;
// 140C897F8: using guessed type __int64 qword_140C897F8;
// 140C89800: using guessed type __int64 qword_140C89800;
// 140C89808: using guessed type int dword_140C89808;
// 140C89810: using guessed type __int64 qword_140C89810;
// 140C89818: using guessed type __int64 qword_140C89818;
// 140C89820: using guessed type int dword_140C89820;
// 140C89828: using guessed type __int64 qword_140C89828;
// 140C89830: using guessed type __int64 qword_140C89830;
// 140C89838: using guessed type int dword_140C89838;
// 140C89840: using guessed type __int64 qword_140C89840;
// 140C89848: using guessed type __int64 qword_140C89848;
// 140C89850: using guessed type int dword_140C89850;
// 140C89858: using guessed type __int64 qword_140C89858;
// 140C89860: using guessed type __int64 qword_140C89860;
// 140C89868: using guessed type int dword_140C89868;
// 140C89870: using guessed type __int64 qword_140C89870;
// 140C89878: using guessed type __int64 qword_140C89878;
// 140C89880: using guessed type int dword_140C89880;
// 140C89888: using guessed type __int64 qword_140C89888;
// 140C89890: using guessed type __int64 qword_140C89890;
// 140C89898: using guessed type int dword_140C89898;
// 140C898A0: using guessed type __int64 qword_140C898A0;
// 140C898A8: using guessed type __int64 qword_140C898A8;
// 140C898B0: using guessed type int dword_140C898B0;
// 140C898B8: using guessed type __int64 qword_140C898B8;
// 140C898C0: using guessed type __int64 qword_140C898C0;
// 140C898C8: using guessed type int dword_140C898C8;
// 140C898D0: using guessed type __int64 qword_140C898D0;
// 140C898D8: using guessed type __int64 qword_140C898D8;
// 140C898E0: using guessed type int dword_140C898E0;
// 140C898E8: using guessed type __int64 qword_140C898E8;
// 140C898F0: using guessed type __int64 qword_140C898F0;
// 140C898F8: using guessed type int dword_140C898F8;
// 140C89900: using guessed type __int64 qword_140C89900;
// 140C89908: using guessed type __int64 qword_140C89908;
// 140C89910: using guessed type int dword_140C89910;
// 140C89918: using guessed type __int64 qword_140C89918;
// 140C89920: using guessed type __int64 qword_140C89920;
// 140C89928: using guessed type int dword_140C89928;
// 140C89930: using guessed type __int64 qword_140C89930;
// 140C89938: using guessed type __int64 qword_140C89938;
// 140C89940: using guessed type int dword_140C89940;
// 140C89948: using guessed type __int64 qword_140C89948;
// 140C89950: using guessed type __int64 qword_140C89950;
// 140C89958: using guessed type int dword_140C89958;
// 140C89960: using guessed type __int64 qword_140C89960;
// 140C89968: using guessed type __int64 qword_140C89968;
// 140C89970: using guessed type int dword_140C89970;
// 140C89978: using guessed type __int64 qword_140C89978;
// 140C89980: using guessed type __int64 qword_140C89980;
// 140C89988: using guessed type int dword_140C89988;
// 140C89990: using guessed type __int64 qword_140C89990;
// 140C89998: using guessed type __int64 qword_140C89998;
// 140C899A0: using guessed type int dword_140C899A0;
// 140C899A8: using guessed type __int64 qword_140C899A8;
// 140C899B0: using guessed type __int64 qword_140C899B0;
// 140C899B8: using guessed type int dword_140C899B8;
// 140C899C0: using guessed type __int64 qword_140C899C0;
// 140C899C8: using guessed type __int64 qword_140C899C8;
// 140C899D0: using guessed type int dword_140C899D0;
// 140C899D8: using guessed type __int64 qword_140C899D8;
// 140C899E0: using guessed type __int64 qword_140C899E0;

