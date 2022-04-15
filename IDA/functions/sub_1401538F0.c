#include "../winhttp.h"

//----- (00000001401538F0) ----------------------------------------------------
__int64* __fastcall sub_1401538F0(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r15
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rbp
	__int64 v8; // rdi
	const wchar_t* v9; // rbx
	wchar_t* v10; // rax
	int v11; // ecx
	bool v12; // zf
	__int64 v13; // rax
	int* v14; // rdi
	int* v15; // r14
	__int64 v16; // rax
	__int64 v17; // rbx
	unsigned __int64 v18; // rbx
	__int64 v19; // rdi
	const wchar_t* v20; // rbx
	wchar_t* v21; // rax
	int v22; // ecx
	bool v23; // zf
	__int64 v24; // rax
	int* v25; // rdi
	int* v26; // rsi
	__int64 v27; // rax
	__int64 v28; // rbx
	unsigned __int64 v29; // rbx
	__int64 v30; // rdi
	const wchar_t* v31; // rbx
	wchar_t* v32; // rax
	int v33; // ecx
	bool v34; // zf
	_WORD* v35; // rax
	__int64 v36; // rdi
	const wchar_t* v37; // rbx
	wchar_t* v38; // rax
	int v39; // ecx
	bool v40; // zf
	_WORD* v41; // rax
	__int64 v42; // rdi
	__int64 v43; // rbx
	int* v44; // rax
	__int64 v45; // rax
	__int64 i; // rbp
	__int64 v47; // rdi
	const wchar_t* v48; // rbx
	wchar_t* v49; // rax
	int v50; // ecx
	bool v51; // zf
	__int64 v52; // rax
	int* v53; // rdi
	int* v54; // r14
	__int64 v55; // rax
	__int64 v56; // rbx
	unsigned __int64 v57; // rbx
	__int64 v58; // rdi
	const wchar_t* v59; // rbx
	wchar_t* v60; // rax
	int v61; // ecx
	bool v62; // zf
	__int64 v63; // rax
	int* v64; // rdi
	int* v65; // rsi
	__int64 v66; // rax
	__int64 v67; // rbx
	unsigned __int64 v68; // rbx
	__int64 v69; // rdi
	const wchar_t* v70; // rbx
	wchar_t* v71; // rax
	int v72; // ecx
	bool v73; // zf
	_WORD* v74; // rax
	__int64 v75; // rdi
	const wchar_t* v76; // rbx
	wchar_t* v77; // rax
	int v78; // ecx
	bool v79; // zf
	_WORD* v80; // rax
	__int64 v81; // rdi
	__int64 v82; // rbx
	int* v83; // rax
	int v85; // [rsp+70h] [rbp+8h] BYREF
	char v86; // [rsp+74h] [rbp+Ch] BYREF
	__int64 v87; // [rsp+78h] [rbp+10h] BYREF
	__int64 v88; // [rsp+80h] [rbp+18h]

	v88 = a3;
	*a1 = a2;
	v4 = a3;
	v5 = sub_14018B280(24i64, 0);
	a1[2] = (__int64)v5;
	*(_QWORD*)v5 = v5;
	*(_QWORD*)(a1[2] + 8) = a1[2];
	v6 = sub_1401A5AE0(v4, L"ApolloCursors");
	if (v6)
	{
		v7 = sub_1401A5AE0(v6, L"ApolloCursor");
		if (v7)
		{
			do
			{
				v8 = *(_QWORD*)(v7 + 96);
				if (v8)
				{
					while (1)
					{
						v9 = L"Name";
						v10 = (wchar_t*)sub_1401A4F40(v8 + 8);
						if (v10 == L"Name")
							break;
						v11 = 0;
						if (*v10)
						{
							do
							{
								if (!*v9 || *v10 != *v9)
									break;
								v12 = v11 == 0x7FFFFFFF;
								if (v11 == 0x7FFFFFFF)
									goto LABEL_11;
								++v10;
								++v9;
								++v11;
							} while (*v10);
							v12 = v11 == 0x7FFFFFFF;
						LABEL_11:
							if (v12)
								break;
						}
						if (!*v10 && !*v9)
							break;
						v8 = *(_QWORD*)(v8 + 56);
						if (!v8)
							goto LABEL_15;
					}
					v13 = sub_1401A4F40(v8 + 32);
				}
				else
				{
				LABEL_15:
					v13 = 0i64;
				}
				v14 = (int*)&unk_1409DB7CC;
				v15 = 0i64;
				if (v13)
					v14 = (int*)v13;
				v16 = 0i64;
				if (*(_WORD*)v14)
				{
					do
						++v16;
					while (*((_WORD*)v14 + v16));
				}
				v17 = (2 * v16) >> 1;
				if ((unsigned __int64)(v17 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v15 = sub_14018B280(2 * (v17 + 1), 0);
				v18 = 2 * v17;
				sub_1407DB590(v15, v14, v18);
				if ((int*)((char*)v15 + v18))
					*(_WORD*)((char*)v15 + v18) = 0;
				v19 = *(_QWORD*)(v7 + 96);
				if (v19)
				{
					while (1)
					{
						v20 = L"Filename";
						v21 = (wchar_t*)sub_1401A4F40(v19 + 8);
						if (v21 == L"Filename")
							break;
						v22 = 0;
						if (*v21)
						{
							do
							{
								if (!*v20 || *v21 != *v20)
									break;
								v23 = v22 == 0x7FFFFFFF;
								if (v22 == 0x7FFFFFFF)
									goto LABEL_32;
								++v21;
								++v20;
								++v22;
							} while (*v21);
							v23 = v22 == 0x7FFFFFFF;
						LABEL_32:
							if (v23)
								break;
						}
						if (!*v21 && !*v20)
							break;
						v19 = *(_QWORD*)(v19 + 56);
						if (!v19)
							goto LABEL_36;
					}
					v24 = sub_1401A4F40(v19 + 32);
				}
				else
				{
				LABEL_36:
					v24 = 0i64;
				}
				v25 = (int*)&unk_1409DB79C;
				v26 = 0i64;
				if (v24)
					v25 = (int*)v24;
				v27 = 0i64;
				if (*(_WORD*)v25)
				{
					do
						++v27;
					while (*((_WORD*)v25 + v27));
				}
				v28 = (2 * v27) >> 1;
				if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v26 = sub_14018B280(2 * (v28 + 1), 0);
				v29 = 2 * v28;
				sub_1407DB590(v26, v25, v29);
				if ((int*)((char*)v26 + v29))
					*(_WORD*)((char*)v26 + v29) = 0;
				v30 = *(_QWORD*)(v7 + 96);
				if (v30)
				{
					while (1)
					{
						v31 = L"HotspotX";
						v32 = (wchar_t*)sub_1401A4F40(v30 + 8);
						if (v32 == L"HotspotX")
							break;
						v33 = 0;
						if (*v32)
						{
							do
							{
								if (!*v31 || *v32 != *v31)
									break;
								v34 = v33 == 0x7FFFFFFF;
								if (v33 == 0x7FFFFFFF)
									goto LABEL_53;
								++v32;
								++v31;
								++v33;
							} while (*v32);
							v34 = v33 == 0x7FFFFFFF;
						LABEL_53:
							if (v34)
								break;
						}
						if (!*v32 && !*v31)
							break;
						v30 = *(_QWORD*)(v30 + 56);
						if (!v30)
							goto LABEL_61;
					}
					v35 = (_WORD*)sub_1401A4F40(v30 + 32);
					sub_1407DF428(v35, (__int64)L"%d", &v85);
				}
			LABEL_61:
				v36 = *(_QWORD*)(v7 + 96);
				if (v36)
				{
					while (1)
					{
						v37 = L"HotspotY";
						v38 = (wchar_t*)sub_1401A4F40(v36 + 8);
						if (v38 == L"HotspotY")
							break;
						v39 = 0;
						if (*v38)
						{
							do
							{
								if (!*v37 || *v38 != *v37)
									break;
								v40 = v39 == 0x7FFFFFFF;
								if (v39 == 0x7FFFFFFF)
									goto LABEL_69;
								++v38;
								++v37;
								++v39;
							} while (*v38);
							v40 = v39 == 0x7FFFFFFF;
						LABEL_69:
							if (v40)
								break;
						}
						if (!*v38 && !*v37)
							break;
						v36 = *(_QWORD*)(v36 + 56);
						if (!v36)
							goto LABEL_75;
					}
					v41 = (_WORD*)sub_1401A4F40(v36 + 32);
					sub_1407DF428(v41, (__int64)L"%d", &v86);
				}
			LABEL_75:
				v87 = 0i64;
				if (v15)
				{
					sub_1401546E0(*a1, v15, v26, &v85, &v87);
					v42 = v87;
				}
				else
				{
					v42 = 0i64;
				}
				v43 = a1[2];
				v44 = sub_14018B280(24i64, 0);
				if (v44 != (int*)-16i64)
					*((_QWORD*)v44 + 2) = v42;
				*(_QWORD*)v44 = v43;
				*((_QWORD*)v44 + 1) = *(_QWORD*)(v43 + 8);
				**(_QWORD**)(v43 + 8) = v44;
				*(_QWORD*)(v43 + 8) = v44;
				if (v26)
					sub_14018B900((__int64)v26, 0);
				if (v15)
					sub_14018B900((__int64)v15, 0);
				v7 = sub_1401A5BC0(v7, L"ApolloCursor");
			} while (v7);
			v4 = v88;
		}
	}
	v45 = sub_1401A5AE0(v4, L"ApolloCrosshairs");
	if (v45)
	{
		for (i = sub_1401A5AE0(v45, L"ApolloCrosshair"); i; i = sub_1401A5BC0(i, L"ApolloCrosshair"))
		{
			v47 = *(_QWORD*)(i + 96);
			if (v47)
			{
				while (1)
				{
					v48 = L"Name";
					v49 = (wchar_t*)sub_1401A4F40(v47 + 8);
					if (v49 == L"Name")
						break;
					v50 = 0;
					if (*v49)
					{
						do
						{
							if (!*v48 || *v49 != *v48)
								break;
							v51 = v50 == 0x7FFFFFFF;
							if (v50 == 0x7FFFFFFF)
								goto LABEL_96;
							++v49;
							++v48;
							++v50;
						} while (*v49);
						v51 = v50 == 0x7FFFFFFF;
					LABEL_96:
						if (v51)
							break;
					}
					if (!*v49 && !*v48)
						break;
					v47 = *(_QWORD*)(v47 + 56);
					if (!v47)
						goto LABEL_100;
				}
				v52 = sub_1401A4F40(v47 + 32);
			}
			else
			{
			LABEL_100:
				v52 = 0i64;
			}
			v53 = (int*)&unk_1409DB71C;
			v54 = 0i64;
			if (v52)
				v53 = (int*)v52;
			v55 = 0i64;
			if (*(_WORD*)v53)
			{
				do
					++v55;
				while (*((_WORD*)v53 + v55));
			}
			v56 = (2 * v55) >> 1;
			if ((unsigned __int64)(v56 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v54 = sub_14018B280(2 * (v56 + 1), 0);
			v57 = 2 * v56;
			sub_1407DB590(v54, v53, v57);
			if ((int*)((char*)v54 + v57))
				*(_WORD*)((char*)v54 + v57) = 0;
			v58 = *(_QWORD*)(i + 96);
			if (v58)
			{
				while (1)
				{
					v59 = L"Filename";
					v60 = (wchar_t*)sub_1401A4F40(v58 + 8);
					if (v60 == L"Filename")
						break;
					v61 = 0;
					if (*v60)
					{
						do
						{
							if (!*v59 || *v60 != *v59)
								break;
							v62 = v61 == 0x7FFFFFFF;
							if (v61 == 0x7FFFFFFF)
								goto LABEL_117;
							++v60;
							++v59;
							++v61;
						} while (*v60);
						v62 = v61 == 0x7FFFFFFF;
					LABEL_117:
						if (v62)
							break;
					}
					if (!*v60 && !*v59)
						break;
					v58 = *(_QWORD*)(v58 + 56);
					if (!v58)
						goto LABEL_121;
				}
				v63 = sub_1401A4F40(v58 + 32);
			}
			else
			{
			LABEL_121:
				v63 = 0i64;
			}
			v64 = (int*)&unk_1409DB77C;
			v65 = 0i64;
			if (v63)
				v64 = (int*)v63;
			v66 = 0i64;
			if (*(_WORD*)v64)
			{
				do
					++v66;
				while (*((_WORD*)v64 + v66));
			}
			v67 = (2 * v66) >> 1;
			if ((unsigned __int64)(v67 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v65 = sub_14018B280(2 * (v67 + 1), 0);
			v68 = 2 * v67;
			sub_1407DB590(v65, v64, v68);
			if ((int*)((char*)v65 + v68))
				*(_WORD*)((char*)v65 + v68) = 0;
			v69 = *(_QWORD*)(i + 96);
			if (v69)
			{
				while (1)
				{
					v70 = L"HotspotX";
					v71 = (wchar_t*)sub_1401A4F40(v69 + 8);
					if (v71 == L"HotspotX")
						break;
					v72 = 0;
					if (*v71)
					{
						do
						{
							if (!*v70 || *v71 != *v70)
								break;
							v73 = v72 == 0x7FFFFFFF;
							if (v72 == 0x7FFFFFFF)
								goto LABEL_138;
							++v71;
							++v70;
							++v72;
						} while (*v71);
						v73 = v72 == 0x7FFFFFFF;
					LABEL_138:
						if (v73)
							break;
					}
					if (!*v71 && !*v70)
						break;
					v69 = *(_QWORD*)(v69 + 56);
					if (!v69)
						goto LABEL_146;
				}
				v74 = (_WORD*)sub_1401A4F40(v69 + 32);
				sub_1407DF428(v74, (__int64)L"%d", &v85);
			}
		LABEL_146:
			v75 = *(_QWORD*)(i + 96);
			if (v75)
			{
				while (1)
				{
					v76 = L"HotspotY";
					v77 = (wchar_t*)sub_1401A4F40(v75 + 8);
					if (v77 == L"HotspotY")
						break;
					v78 = 0;
					if (*v77)
					{
						do
						{
							if (!*v76 || *v77 != *v76)
								break;
							v79 = v78 == 0x7FFFFFFF;
							if (v78 == 0x7FFFFFFF)
								goto LABEL_154;
							++v77;
							++v76;
							++v78;
						} while (*v77);
						v79 = v78 == 0x7FFFFFFF;
					LABEL_154:
						if (v79)
							break;
					}
					if (!*v77 && !*v76)
						break;
					v75 = *(_QWORD*)(v75 + 56);
					if (!v75)
						goto LABEL_160;
				}
				v80 = (_WORD*)sub_1401A4F40(v75 + 32);
				sub_1407DF428(v80, (__int64)L"%d", &v86);
			}
		LABEL_160:
			v87 = 0i64;
			if (v54)
			{
				sub_140154850(*a1, v54, v65, &v85, &v87);
				v81 = v87;
			}
			else
			{
				v81 = 0i64;
			}
			v82 = a1[2];
			v83 = sub_14018B280(24i64, 0);
			if (v83 != (int*)-16i64)
				*((_QWORD*)v83 + 2) = v81;
			*(_QWORD*)v83 = v82;
			*((_QWORD*)v83 + 1) = *(_QWORD*)(v82 + 8);
			**(_QWORD**)(v82 + 8) = v83;
			*(_QWORD*)(v82 + 8) = v83;
			if (v65)
				sub_14018B900((__int64)v65, 0);
			if (v54)
				sub_14018B900((__int64)v54, 0);
		}
	}
	return a1;
}
// 140153BAB: conditional instruction was optimized away because rdi.8!=0
// 140153BC2: conditional instruction was optimized away because rdi.8!=0
// 140153BD9: conditional instruction was optimized away because rdi.8!=0
// 140153C7B: conditional instruction was optimized away because rdi.8!=0
// 140153FC7: conditional instruction was optimized away because rdi.8!=0
// 140153FDE: conditional instruction was optimized away because rdi.8!=0
// 140153FF5: conditional instruction was optimized away because rdi.8!=0
// 140154097: conditional instruction was optimized away because rdi.8!=0
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A32B28: using guessed type wchar_t aHotspoty[9];
// 140A32B40: using guessed type wchar_t aHotspotx[9];
// 140A338B8: using guessed type wchar_t aApollocursors[14];
// 140A338D8: using guessed type wchar_t aApollocursor_0[13];
// 140A338F8: using guessed type wchar_t aApollocursor[13];
// 140A33958: using guessed type wchar_t aFilename_0[9];
// 140A33970: using guessed type wchar_t aApollocrosshai_1[16];
// 140A339A8: using guessed type wchar_t aApollocrosshai_0[16];
// 140A339C8: using guessed type wchar_t aApollocrosshai[17];

