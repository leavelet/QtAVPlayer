/*********************************************************
 * Copyright (C) 2021, Val Doroshchuk <valbok@gmail.com> *
 *                                                       *
 * This file is part of QtAVPlayer.                      *
 * Free Qt Media Player based on FFmpeg.                 *
 *********************************************************/

#ifndef QAVAUDIOINPUTFILTER_P_H
#define QAVAUDIOINPUTFILTER_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qavinoutfilter_p.h"

QT_BEGIN_NAMESPACE

class QAVDemuxer;
class QAVAudioInputFilterPrivate;
class Q_AVPLAYER_EXPORT QAVAudioInputFilter : public QAVInOutFilter
{
public:
    QAVAudioInputFilter(QObject *parent = nullptr);
    QAVAudioInputFilter(const QAVDemuxer *demuxer, QObject *parent = nullptr);
    QAVAudioInputFilter(const QAVAudioInputFilter &other);
    ~QAVAudioInputFilter();
    QAVAudioInputFilter &operator=(const QAVAudioInputFilter &other);

    int configure(AVFilterGraph *graph, AVFilterInOut *in) override;

protected:
    Q_DECLARE_PRIVATE(QAVAudioInputFilter)
};

QT_END_NAMESPACE

#endif
